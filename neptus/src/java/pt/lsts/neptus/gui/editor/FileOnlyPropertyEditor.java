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
 * 25/05/2017
 */
package pt.lsts.neptus.gui.editor;

import java.io.File;

import javax.swing.JFileChooser;

import com.l2fprod.common.beans.editor.FilePropertyEditor;

import pt.lsts.neptus.NeptusLog;
import pt.lsts.neptus.gui.swing.NeptusFileView;

/**
 * @author pdias
 *
 */
public class FileOnlyPropertyEditor extends FilePropertyEditor {

    public FileOnlyPropertyEditor() {
    }
    
    /**
     * @param asTableEditor
     */
    public FileOnlyPropertyEditor(boolean asTableEditor) {
        super(asTableEditor);
    }

    /* (non-Javadoc)
     * @see com.l2fprod.common.beans.editor.FilePropertyEditor#customizeFileChooser(javax.swing.JFileChooser)
     */
    @Override
    protected void customizeFileChooser(JFileChooser chooser) {
        chooser.setFileSelectionMode(JFileChooser.FILES_ONLY);
        chooser.setFileView(new NeptusFileView());
        
        File fxSel = null;
        try {
            fxSel = (File) getValue();
            chooser.setSelectedFile(fxSel);
        }
        catch (Exception e) {
            NeptusLog.pub().debug(e);
        }
    }
}
