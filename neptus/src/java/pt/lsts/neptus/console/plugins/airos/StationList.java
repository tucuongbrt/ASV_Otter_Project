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
 * Author: zp
 * Dec 22, 2015
 */
package pt.lsts.neptus.console.plugins.airos;

import java.io.File;
import java.io.FileReader;
import java.io.Reader;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.List;

import com.google.gson.Gson;
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonParser;

/**
 * @author zp
 *
 */
public class StationList {

    public List<Station> stations = new ArrayList<Station>();
    
    public StationList(Reader jsonReader) {
        JsonParser parser = new JsonParser();
        JsonArray arr = parser.parse(jsonReader).getAsJsonArray();
        Gson gson = new Gson();
        for (JsonElement el : arr)
            stations.add(gson.fromJson(el, Station.class));
    }
    
    public StationList(String jsonString) {
        this(new StringReader(jsonString));
    }
    
    public static void main(String[] args) throws Exception {
        
        FileReader reader = new FileReader(new File("/home/zp/Desktop/test.json"));
        StationList sl = new StationList(reader);
        for (Station s : sl.stations) {
            System.out.println(s.lastip+" -> "+s.ccq);
        }        
    }
}
