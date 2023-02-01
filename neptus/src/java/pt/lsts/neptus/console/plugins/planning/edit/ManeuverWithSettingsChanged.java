/*
 * Copyright (c) 2004-2021 Universidade do Porto - Faculdade de Engenharia
 * Laboratório de Sistemas e Tecnologia Subaquática (LSTS)
 * All rights reserved.
 * Rua Dr. Roberto Frias s/n, sala I203, 4200-465 Porto, Portugal
 *
 * This file is part of Neptus, Command and Control Framework.
 *
 * Commercial Licence Usage
 * Licencees holding valid commercial Neptus licences may use this file
 * in accordance with the commercial licence agreement provided with the
 * Software or, alternatively, in accordance with the terms contained in a
 * written agreement between you and Universidade do Porto. For licensing
 * terms, conditions, and further information contact lsts@fe.up.pt.
 *
 * Modified European Union Public Licence - EUPL v.1.1 Usage
 * Alternatively, this file may be used under the terms of the Modified EUPL,
 * Version 1.1 only (the "Licence"), appearing in the file LICENCE.md
 * included in the packaging of this file. You may not use this work
 * except in compliance with the Licence. Unless required by applicable
 * law or agreed to in writing, software distributed under the Licence is
 * distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF
 * ANY KIND, either express or implied. See the Licence for the specific
 * language governing permissions and limitations at
 * https://github.com/LSTS/neptus/blob/develop/LICENSE.md
 * and http://ec.europa.eu/idabc/eupl.html.
 *
 * For more information please see <http://lsts.fe.up.pt/neptus>.
 *
 * Author: Paulo Dias
 * 16/05/2017
 */
package pt.lsts.neptus.console.plugins.planning.edit;

import javax.swing.undo.AbstractUndoableEdit;
import javax.swing.undo.CannotRedoException;
import javax.swing.undo.CannotUndoException;

import pt.lsts.neptus.i18n.I18n;
import pt.lsts.neptus.mp.Maneuver;
import pt.lsts.neptus.types.mission.plan.PlanType;

/**
 * @author pdias
 *
 */
public class ManeuverWithSettingsChanged extends AbstractUndoableEdit {

    private static final long serialVersionUID = 1L;
    protected PlanType plan;
    protected Maneuver maneuver;
    protected String beforeXml, afterXml;

    /**
     * Use {@link Maneuver#asXML()} method.
     * 
     * @param maneuver
     * @param plan
     * @param beforeXml
     */
    public ManeuverWithSettingsChanged(Maneuver maneuver, PlanType plan, String beforeXml) {
        this.maneuver = maneuver;
        this.plan = plan;
        this.beforeXml = beforeXml;
        this.afterXml = maneuver.asXML();        
    }

    @Override
    public boolean canUndo() {
        return true;
    }

    @Override
    public boolean canRedo() {
        return true;
    }

    @Override
    public String getPresentationName() {
        return I18n.textf("Change the maneuver %maneuverId", maneuver.getId());
    }

    @Override
    public void undo() throws CannotUndoException {
        maneuver.loadXMLWithSettings(beforeXml);
    }

    @Override
    public void redo() throws CannotRedoException {
        maneuver.loadXMLWithSettings(afterXml);
    }

    /**
     * @return the maneuver
     */
    public Maneuver getManeuver() {
        return maneuver;
    }

    /**
     * @return the plan
     */
    public PlanType getPlan() {
        return plan;
    }
}
