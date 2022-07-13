#include <stdio.h>
#include <stdlib.h>

#define BUFFER 64

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

    char wage[BUFFER];
    char hours[BUFFER];
    float wage_f;
    int hours_n;
    
    printf("Enter wage: $__\b\b");
    fgets(wage, BUFFER, stdin);
    wage_f = atof(wage);
    printf("Your wage is %.2f. \nWhat are your hours? __\b\b", wage_f);
    fgets(hours, BUFFER, stdin);
    hours_n = atoi(hours);
    float daily_earnings = wage_f*hours_n;
    float weekly_earnings = wage_f*hours_n*5;
    float monthly_earnings = wage_f*hours_n*5*4;
    float quarterly_earnings = wage_f*hours_n*5*4*4;
    float yearly_earnings = wage_f*hours_n*5*4*4*4;
    
    /* TODO: create a more elegant/complex table printing function */
    /* TODO: improve table readability */
    printf(" =============================================================================================================\n");
    printf(" ||--- WageTable for %.2f an hour --------------------------------------------------------------------------\n",
           wage_f);
    printf(" ||   Hourly  | Daily    | Weekly    | Monthly     | Quarterly     | Yearly     |                           \n");
    printf(" ||   $%.2f  | $%.2f   | $%.2f   | $%.2f    | $%.2f      | $%.2f  |                           \n",
           wage_f, daily_earnings, weekly_earnings, monthly_earnings, quarterly_earnings, yearly_earnings);
    printf(" =============================================================================================================\n");
    
    /* TODO: 1) write fgets() function for input 
     *       2) convert input as necessary (check ebw for methods) */
    
    return 0;

}
