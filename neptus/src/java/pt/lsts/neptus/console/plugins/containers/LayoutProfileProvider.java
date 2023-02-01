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
 * 1/09/2011
 */
package pt.lsts.neptus.console.plugins.containers;

import java.awt.Component;

/**
 * @author pdias
 *
 */
public interface LayoutProfileProvider {
    /**
     * If the LayoutProfileProvider child's have a different profile
     * is acceptable to only inform the own profile.
     * @return
     */
    public String getActiveProfile();
    
    /**
     * To activate a profile. Empty restores the full view.
     * (It is necessary to propagate the profile change.)
     * @param name
     * @return
     */
    public boolean setActiveProfile(String name);
    
//    /**
//     * It the same as calling {@link #setActiveProfile(String)} with empty string.
//     * @return
//     */
//    public boolean resetActiveProfile();
//    
//    public String getDefaultProfile();
//    
//    public boolean setDefaultProfile();
    
    public String[] listProfileNames();
    
    public boolean supportsMaximizePanelOnContainer();
    
    public boolean maximizePanelOnContainer(Component comp);

}