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
 * Author: rasm
 * Apr 12, 2011
 */
package pt.lsts.neptus.plugins.gps.device;

/**
 * Class representing a broken down UTC date.
 * 
 * @author Ricardo Martins
 */
public class Date {
    /** UTC day of the month. */
    private int day;
    /** UTC month of the year. */
    private int month;
    /** UTC year. */
    private int year;

    /**
     * Get the day of the month.
     * 
     * @return UTC day of the month.
     */
    public int getDay() {
        return day;
    }

    /**
     * Set the day of the month.
     * 
     * @param aDay
     *            day of the month.
     */
    public void setDay(int aDay) {
        day = aDay;
    }

    /**
     * Get the month of the year.
     * 
     * @return month of the year.
     */
    public int getMonth() {
        return month;
    }

    /**
     * Set the month of the year.
     * 
     * @param aMonth
     *            month of the year.
     */
    public void setMonth(int aMonth) {
        month = aMonth;
    }

    /**
     * Get the year.
     * 
     * @return year.
     */
    public int getYear() {
        return year;
    }

    /**
     * Set the year.
     * 
     * @param aYear
     *            year.
     */
    public void setYear(int aYear) {
        year = aYear;
    }
}
