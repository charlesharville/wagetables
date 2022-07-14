#ifndef TABLES_H
#define TABLES_H

void createWageTable(void);

float *pwage_f = &wage_f;

void createWageTable(void)
{

    /* TODO: create a more elegant/complex table printing function */
    /* TODO: improve table readability */
    
    /*
     * TODO: RESOLVE ISSUE: Change table output according to user response to prompt about paid or unpaid vacation, etc.
     * 
    if (vacation_paid_n == 1) {
        printf(" ||- 1) With paid vacation ");
    }
    
    else if (vacation_paid_n == 2) {
        printf(" ||- 1) With unpaid vacation ");
    }
    */
    
float daily_earnings = *pwage_f*hours_n;
float weekly_earnings = *pwage_f*hours_n*5;
float monthly_earnings = *pwage_f*hours_n*5*4;
float quarterly_earnings = *pwage_f*hours_n*5*4*4;
float yearly_earnings = *pwage_f*hours_n*5*4*4*4;
    
    
    printf(" =============================================================================================================\n");
    printf(" ||--- WageTable for %.2f an hour ----------------------------------------------------------------------------\n",
           wage_f);
    printf(" ||   Hourly  | Daily    | Weekly    | Monthly     | Quarterly     | Yearly     |                           \n");
    printf(" ||   $%.2f  | $%.2f   | $%.2f   | $%.2f    | $%.2f      | $%.2f  |                           \n",
           wage_f, daily_earnings, weekly_earnings, monthly_earnings, quarterly_earnings, yearly_earnings);
    printf("||- 2) With unpaid vacation (%d weeks) -----------------------------------------------------------------------");
    printf(" ||   Hourly  | Daily    | Weekly    | Monthly     | Quarterly     | Yearly     |                           \n");
    printf(" ||   $%.2f  | $%.2f   | $%.2f   | $%.2f    | $%.2f      | $%.2f  |                           \n",
           wage_f, daily_earnings, weekly_earnings, monthly_earnings, quarterly_earnings, yearly_earnings);
    printf("=============================================================================================================\n");
    printf("=============================================================================================================\n");    
    /* TODO: 1) write fgets() function for input 
     *       2) convert input as necessary (check ebw for methods) */

}


void changeTableMessage(void)
{

}

#endif
