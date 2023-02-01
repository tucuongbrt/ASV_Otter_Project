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
 * Version 1.1 only (the "Licence"), appearing in the file LICENSE.md
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
 * Author: pdias
 * 16/05/2017
 */
package pt.lsts.neptus.console.plugins.planning.edit;

import java.util.Arrays;
import java.util.Map;
import java.util.Vector;

import javax.swing.undo.AbstractUndoableEdit;
import javax.swing.undo.CannotRedoException;
import javax.swing.undo.CannotUndoException;

import pt.lsts.imc.IMCMessage;
import pt.lsts.neptus.i18n.I18n;
import pt.lsts.neptus.mp.Maneuver;
import pt.lsts.neptus.mp.actions.PlanActions;
import pt.lsts.neptus.types.mission.plan.PlanType;

/**
 * @author pdias
 *
 */
public class AllManeuversPayloadSettingsChanged extends AbstractUndoableEdit {

    private static final long serialVersionUID = 1L;
    protected PlanType plan;
    protected PlanActions newPlanActions;
    protected Map<String, PlanActions> originalPlanActionsPerManeuver;
    
    public AllManeuversPayloadSettingsChanged(PlanType plan, PlanActions newPlanActions,
            Map<String, PlanActions> originalPlanActionsPerManeuver) {
        
        this.plan = plan;
        this.newPlanActions = newPlanActions;
        this.originalPlanActionsPerManeuver = originalPlanActionsPerManeuver;
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
        return I18n.text("Change the payload settings for all maneuvers");
    }

    @Override
    public void undo() throws CannotUndoException {
        for (Maneuver m : plan.getGraph().getAllManeuvers()) {
            PlanActions sa = originalPlanActionsPerManeuver.get(m.getId());
            IMCMessage[] aMsgs = sa.getAllMessages();
            for (int i = 0; i < aMsgs.length; i++) {
                aMsgs[i] = aMsgs[i].cloneMessage();
            }
            Vector<IMCMessage> startActions = new Vector<>();
            startActions.addAll(Arrays.asList(aMsgs));
            m.getStartActions().parseMessages(startActions);
        }
    }

    @Override
    public void redo() throws CannotRedoException {
        for (Maneuver m : plan.getGraph().getAllManeuvers()) {
            PlanActions sa = newPlanActions;
            IMCMessage[] aMsgs = sa.getAllMessages();
            for (int i = 0; i < aMsgs.length; i++) {
                aMsgs[i] = aMsgs[i].cloneMessage();
            }
            Vector<IMCMessage> startActions = new Vector<>();
            startActions.addAll(Arrays.asList(aMsgs));
            m.getStartActions().parseMessages(startActions);
        }
    }
}
