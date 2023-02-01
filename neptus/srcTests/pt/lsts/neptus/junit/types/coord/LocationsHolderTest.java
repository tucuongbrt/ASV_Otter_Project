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
 * Author: 
 * 18/Mai/2005
 */
package pt.lsts.neptus.junit.types.coord;

import junit.framework.TestCase;
import pt.lsts.neptus.NeptusLog;
import pt.lsts.neptus.types.coord.LocationType;
import pt.lsts.neptus.types.coord.LocationsHolder;

/**
 * @author Paulo
 *
 */
@SuppressWarnings("all")
public class LocationsHolderTest extends TestCase
{

    public static void main(String[] args)
    {
        junit.swingui.TestRunner.run(LocationsHolderTest.class);
    }

    /*
     * @see TestCase#setUp()
     */
    protected void setUp() throws Exception
    {
        super.setUp();
    }

    /*
     * @see TestCase#tearDown()
     */
    protected void tearDown() throws Exception
    {
        super.tearDown();
    }
    
    public void testLocHolder()
    {
        LocationType loc1 = new LocationType();
        loc1.setId("loc1");
        LocationType loc2 = new LocationType();
        loc2.setId("loc2");
        LocationType loc3 = new LocationType();
        loc3.setId("loc3");
        
        assertTrue(LocationsHolder.putAbstractLocationPoint(loc1));
        assertTrue(LocationsHolder.putAbstractLocationPoint(loc2));
        assertTrue(LocationsHolder.putAbstractLocationPoint(loc3));
        
        NeptusLog.pub().info("<###> "+LocationsHolder.generateReport());

        assertTrue(LocationsHolder.removeRefToAbstractLocationPoint(loc1.getId(), loc2.getId()));

        NeptusLog.pub().info("<###>_________________________________________\n");
        NeptusLog.pub().info("<###> "+LocationsHolder.generateReport());

        
        assertTrue(LocationsHolder.removeAbstractLocationPoint(loc1.getId()));

        NeptusLog.pub().info("<###>_________________________________________\n");
        NeptusLog.pub().info("<###> "+LocationsHolder.generateReport());

    }

}