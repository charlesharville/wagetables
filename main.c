#include <stdio.h>
#include <stdlib.h>
#include "headers/wt_title.h"
#include "headers/wt_handlers.h"
#include "headers/wt_tables.h"


/***************************************************************************************************************************
     <WageTables, a simple earnings calculator>
    Copyright (C) <2022>  <Charles Harville>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    If you wish to contact the author of this programme, I can be reached
    on Sourceforge or Github:
        sourceforge.com/charv
        github.com/charlesharville
 *******************************************************************************************************************
 
 Description:
 This programme calculates annual income from user's defined wage and hours, and prints a table showing 
 pay for different periods of time: day, week, month, quarter, year. Future versions will allow for a
 range of wages and hours to be defined, including basic tax/accounting functionality.
 In the meantime, here are the formulæ used for calculating pay rate.
 
 daily: wage*hours
 weekly: wage*hours*workdays
 monthly: wage*hours*workdays*weeks
 quarterly: wage*hours*workdays*weeks*months*4
 yearly: wage*hours*workdays*weeks*months*12
 
 Example wagetable($15 per hour, part-time(4 hour workday)):
 
 =============================================================================================================
 ||--- Gross Earnings --------------------------------------------------------------------------------------||
 ||   Hourly|Daily|Weekly|Monthly|Quarterly|Yearly |                                                        ||
 ||   $15   |$60  |$300  |$1,200 |$4,800   |$19,200|                                                        ||
 =============================================================================================================
 
 *******************************************************************************************************************
 
***************************************************************************************************************************/

int main(void) {


    
displayWageTablesTitle();
getWage();
getHours();
getVacation();
    
    return 0;

}
