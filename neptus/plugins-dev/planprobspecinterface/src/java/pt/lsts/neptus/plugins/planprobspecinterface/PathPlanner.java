/*
 * Copyright (c) 2004-2021 
 * Author: Nikolai Lauvås
 */
package pt.lsts.neptus.plugins.planprobspecinterface;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.Point2D;
import java.awt.geom.Rectangle2D;

import java.util.Vector;

import javax.swing.JMenuItem;
import javax.swing.JPopupMenu;
import javax.swing.SwingWorker;
import javax.vecmath.Point3d;



import pt.lsts.imc.PlanProbSpec;
import pt.lsts.imc.PolygonVertex;

import pt.lsts.neptus.NeptusLog;
import pt.lsts.neptus.console.ConsoleLayout;
import pt.lsts.neptus.gui.PropertiesEditor;
import pt.lsts.neptus.plugins.NeptusProperty;
import pt.lsts.neptus.plugins.NeptusProperty.DistributionEnum;
import pt.lsts.neptus.plugins.NeptusProperty.LEVEL;
import pt.lsts.neptus.plugins.PluginDescription;
import pt.lsts.neptus.plugins.SimpleRendererInteraction;
import pt.lsts.neptus.renderer2d.Renderer2DPainter;
import pt.lsts.neptus.renderer2d.StateRenderer2D;
import pt.lsts.neptus.renderer2d.StateRendererInteraction;
import pt.lsts.neptus.types.map.PathElement;
import pt.lsts.neptus.types.coord.LocationType;
import pt.lsts.neptus.util.GuiUtils;

/**
 * @author Nikolai Lauvås
 * 
 */
@PluginDescription(name = "Online Planner", icon = "pt/lsts/neptus/plugins/planprobspecinterface/shortest.png")
public class PathPlanner extends SimpleRendererInteraction implements Renderer2DPainter,
        StateRendererInteraction {

    public enum EDITION_STATES {
        NONE,
        DEFINE_COVERAGE_POLYGON
    };

    public enum GRID_TYPES {
        HEXAGONAL,
        SQUARE,
        TRIANGULAR
    };
    public LocationType destination = null;
    public LocationType initial = null;
    public LocationType bottomLeft = null;
    public LocationType topRight = null;
    protected PathElement currentObstacle = null;
    protected EDITION_STATES state = EDITION_STATES.NONE;


    protected boolean isActive;

    @NeptusProperty(name = "Planning timeout", category = "Feasible Path")
    public double planingTimeout = 60;

    @NeptusProperty(name = "Planner", category = "Feasible Path")
    public String feasiblePathPlanner = "1";

    @NeptusProperty(name = "Activate plan")
    public Boolean activatePlan = true;

    @NeptusProperty(name = "Grid Geometry", category = "Coverage Planner")
    public GRID_TYPES gridGeometry = GRID_TYPES.HEXAGONAL;

    @NeptusProperty(name = "Grid Size", category = "Coverage Planner")
    public double gridSize = 75.0;

    @NeptusProperty(name = "Planner", category = "Coverage Planner")
    public int coveragePlanner = 0;

    @NeptusProperty(name = "Azimuth Weight", category = "Coverage Planner")
    public double azimuthWeight = 0.001;

    @NeptusProperty(name = "Distance Weight", category = "Coverage Planner")
    public double distanceWeight = 0.0005;

    @NeptusProperty(name = "Planning Problem Type", userLevel = LEVEL.REGULAR)
    public PlanProbSpec.PROBLEM_TYPE problemType = PlanProbSpec.PROBLEM_TYPE.COVERAGE;
    
    @NeptusProperty(name = "Default Speed (m/s)")
    public double defaultSpeed = 1.0;

    @NeptusProperty(name = "Vehicle(-1=current)")
    public int vehicle = 0x2810;

    //@NeptusProperty(name = "Custom Parameters") public 
    String customparameters = "t=60.0;p=1;a=1;";

    /**
     * @param console
     */
    public PathPlanner(ConsoleLayout console) {
        super(console);
    }

    @Override
    public boolean isExclusive() {
        return true;
    }

    @Override
    public void setActive(boolean mode, StateRenderer2D source) {
        isActive = mode;
    }

    @Override
    public void mouseClicked(MouseEvent event, StateRenderer2D source) {

        final Point2D mousePosition = event.getPoint();
        final StateRenderer2D renderer = source;

        if (event.getButton() == MouseEvent.BUTTON3) {
            JPopupMenu menu = new JPopupMenu();
            switch (state) {
                case NONE:
                    menu.add("Define initial location").addActionListener(new ActionListener() {
                        @Override
                        public void actionPerformed(ActionEvent e) {
                            initial = renderer.getRealWorldLocation(mousePosition);
                        }
                    });

                    switch (problemType) {
                        case FPATH:
                            menu.add("Define destination location").addActionListener(new ActionListener() {
                                @Override
                                public void actionPerformed(ActionEvent e) {
                                    destination = renderer.getRealWorldLocation(mousePosition);
                                }
                            });
                            menu.add("Define boundary's bottom left").addActionListener(new ActionListener() {

                                @Override
                                public void actionPerformed(ActionEvent e) {
                                    bottomLeft = renderer.getRealWorldLocation(mousePosition);
                                }
                            });

                            menu.add("Define boundary's top right").addActionListener(new ActionListener() {

                                @Override
                                public void actionPerformed(ActionEvent e) {
                                    topRight = renderer.getRealWorldLocation(mousePosition);
                                }
                            });
                        break;
                        case COVERAGE:
                            menu.add("Define Search Area").addActionListener(new ActionListener() {

                                @Override
                                public void actionPerformed(ActionEvent e) {
                                    state = EDITION_STATES.DEFINE_COVERAGE_POLYGON;
                                    LocationType loc = renderer.getRealWorldLocation(mousePosition);
                                    currentObstacle = null;
                                    currentObstacle = new PathElement(renderer.getMapGroup(), null, loc);
                                    currentObstacle.setFilled(true);
                                    currentObstacle.setShape(true);
                                    currentObstacle.setMyColor(Color.yellow);
                                    currentObstacle.addPoint(0, 0, 0, false);

                                    return;
                                }
                            });
                        break;
                    }

                    menu.addSeparator();

                    menu.add("Planner settings").addActionListener(new ActionListener() {
                        @Override
                        public void actionPerformed(ActionEvent e) {

                            PropertiesEditor.editProperties(PathPlanner.this, true);

                        }
                    });

                    menu.addSeparator();

                    menu.add("Generate plan").addActionListener(new ActionListener() {

                        @Override
                        public void actionPerformed(ActionEvent e) {
                            generatePlan();
                        }
                    });

                break;
                case DEFINE_COVERAGE_POLYGON:
                    menu.add("Finish Coverage Polygon").addActionListener(new ActionListener() {
                        @Override
                        public void actionPerformed(ActionEvent e) {
                            currentObstacle.setFinished(true);
                            currentObstacle.setMyColor(Color.orange);
                            //obstacles.add(currentObstacle);
                            //currentObstacle = null;
                            state = EDITION_STATES.NONE;
                        }
                    });
                break;
            }
            menu.show(source, (int) mousePosition.getX(), (int) mousePosition.getY());
        }

        else {
            if (state == EDITION_STATES.DEFINE_COVERAGE_POLYGON) {
                NeptusLog.pub().info("<###> "+renderer.getRealWorldLocation(mousePosition));
                LocationType loc = renderer.getRealWorldLocation(mousePosition);
                double offsets[] = loc.getOffsetFrom(currentObstacle.getCenterLocation());
                currentObstacle.addPoint(offsets[1], offsets[0], 0, false);
            }
        }
    }

    protected void generatePlan() {
        PlanProbSpec spec = new PlanProbSpec();
        spec.setVehicle(vehicle);
        spec.setProblemType(problemType);
        spec.setSpeed(defaultSpeed);

        spec.setStartLat(initial.getLatitudeRads());
        spec.setStartLon(initial.getLongitudeRads());


        String parameters = "a=" + ((activatePlan) ? 1 : 0) + ";";
        Vector<PolygonVertex> area = new Vector<>();
        switch (problemType) {
            case FPATH:
                area.add(new PolygonVertex(bottomLeft.getLatitudeRads(), bottomLeft.getLongitudeRads()));
                area.add(new PolygonVertex(topRight.getLatitudeRads(), topRight.getLongitudeRads()));
                spec.setEndLat(destination.getLatitudeRads());
                spec.setEndLon(destination.getLongitudeRads());
                parameters += "t=" + planingTimeout + ";";
                parameters += "p=" + feasiblePathPlanner + ";";
            break;
            case COVERAGE:
                Vector<Point3d> points = currentObstacle.getPoints();
                LocationType center = new LocationType(currentObstacle.getCenterLocation().convertToAbsoluteLatLonDepth());
                for (Point3d pt : points) {
                    LocationType loc = new LocationType(center);
                    loc.translatePosition(pt.x, pt.y, 0);
                    loc.convertToAbsoluteLatLonDepth();
                    area.add(new PolygonVertex(loc.getLatitudeRads(), loc.getLongitudeRads()));
                }
                parameters += "gg=" + (short)gridGeometry.ordinal() + ";";
                parameters += "gs=" + gridSize + ";";
                parameters += "p=" + coveragePlanner + ";";
                parameters += "paw=" + azimuthWeight + ";";
                parameters += "pdw=" + distanceWeight + ";";
            break;
        }

        spec.setArea(area);
        spec.setCustom(parameters);
        

        send(spec);
        NeptusLog.pub().info("Sent path generation request to vehicle");
    }

    @Override
    public void paint(Graphics2D g, StateRenderer2D renderer) {


        g.setColor(Color.green.darker());
        g.setStroke(new BasicStroke(4.0f));

        if (initial != null) {
            Point2D point = renderer.getScreenPosition(initial);
            if (isActive)
                g.setColor(Color.green);
            else
                g.setColor(Color.green.darker().darker());

            g.fill(new Ellipse2D.Double(point.getX() - 5, point.getY() - 5, 10, 10));
            g.draw(new Ellipse2D.Double(point.getX() - 5, point.getY() - 5, 10, 10));
        }

        g.setColor(Color.black);
        g.setStroke(new BasicStroke(1.0f));
        switch (problemType) {
            case FPATH:
            if (destination != null) {
                Point2D point = renderer.getScreenPosition(destination);
                if (isActive)
                    g.setColor(Color.red);
                else
                    g.setColor(Color.red.darker().darker());
    
                g.fill(new Ellipse2D.Double(point.getX() - 5, point.getY() - 5, 10, 10));
                g.draw(new Ellipse2D.Double(point.getX() - 5, point.getY() - 5, 10, 10));
            }
            if (isActive) {
                if (bottomLeft != null) {
                    Point2D point = renderer.getScreenPosition(bottomLeft);
                    g.draw(new Line2D.Double(point.getX(), point.getY(), point.getX() + 20, point.getY()));
                    g.draw(new Line2D.Double(point.getX(), point.getY(), point.getX(), point.getY() - 20));
                }
    
                if (topRight != null) {
                    Point2D point = renderer.getScreenPosition(topRight);
                    g.draw(new Line2D.Double(point.getX() - 20, point.getY(), point.getX(), point.getY()));
                    g.draw(new Line2D.Double(point.getX(), point.getY(), point.getX(), point.getY() + 20));
                }
            }
                if (topRight != null && bottomLeft != null) {
                    Point2D topo = renderer.getScreenPosition(topRight);
                    Point2D fundo = renderer.getScreenPosition(bottomLeft);
        
                    double x = Math.min(topo.getX(), fundo.getX());
                    double y = Math.min(topo.getY(), fundo.getY());
        
                    double w = Math.abs(topo.getX() - fundo.getX());
                    double h = Math.abs(topo.getY() - fundo.getY());
        
                    g.draw(new Rectangle2D.Double(x, y, w, h));
                }
            break;
            case COVERAGE:
                if (currentObstacle != null)
                currentObstacle.paint(g, renderer, renderer.getRotation());
            break;
        }
    }

    /*
     * (non-Javadoc)
     * 
     * @see pt.lsts.neptus.plugins.SimpleSubPanel#initSubPanel()
     */
    @Override
    public void initSubPanel() {
        // TODO Auto-generated method stub

    }

    /*
     * (non-Javadoc)
     * 
     * @see pt.lsts.neptus.plugins.SimpleSubPanel#cleanSubPanel()
     */
    @Override
    public void cleanSubPanel() {
        // TODO Auto-generated method stub

    }

}
