/* wt_handlers.h - handles all prompts with y/n logic, whether called from main(), or somewhere else */
#ifndef WT_HANDLERS_H
#define WT_HANDLERS_H

#define BUFFER 64

/* variables declared below ... */
char wage[BUFFER];
char hours[BUFFER];
char vacation_days[BUFFER];
char ans[1];
char vacation_paid[1];

float wage_f;

int hours_n;
int vacation_days_n;
int vacation_taken; /* token to be set to either 0 or 1 */
int vacation_paid_n;
int vacation_country_standard_length = 14; /* This is going to be moved into wt_settings at some point. It will the user-defined number of days allotted for vacation in a given country. By default, it should be set to 14. */

/* function prototypes below ... */
void getWage(void);
void getHours(void);
void getVacation(void);
void handleVacationData(void);

/* function definitons below ... */
void getWage(void) /* get user's hourly wage(or desired/prospective wage!) */
{
    printf("Enter your hourly wage: $__\b\b");
    fgets(wage, BUFFER, stdin);
    wage_f = atof(wage);
    printf("Your hourly wage is %.2f.\n", wage_f);
}

void getHours(void) /* get user's number of work hours */
{
    printf("What are your hours? __\b\b");
    fgets(hours, BUFFER, stdin);
    hours_n = atoi(hours);
    printf("You work %d hour(s) daily.\n", hours_n);
}

void getVacation(void) /* find whether the user take a vacation, and whether it is paid or unpaid */
{
    printf("Do you take a vacation? y/n ... _\b");
    fgets(ans, 2, stdin); /* takes a string, so make room for the null zero ! */
    if (ans[0] == 'y')
    {
        handleVacationData(); /* using a function here is more readable */
    }
    else if (ans[0] == 'n')
    {
        printf("Table results will not take vacation time into account.\n");
    }
    else
    {
        printf("nothing.\n");
    }
}

void handleVacationData(void)
{
        printf("How many days? __\b\b");
        fgets(vacation_days, 3, stdin);
        vacation_days_n = atoi(vacation_days);
        
        if (vacation_days_n != 0)
        {
            printf("You are taking %d days of vacation.\n", vacation_days);
            vacation_taken = 1;
            printf("Is this paid or unpaid? p/u ... __\b\b"); /* now we prompt again ... to find whether user receives paid vacaton: */
            fgets(vacation_paid, 1, stdin);
            vacation_paid_n = atoi(vacation_paid);
            
            if (vacation_paid[0] == 'p')
            {
                printf("Your wagetable will take this into account.\n");
            }
            else if (vacation_paid[0] == 'u')
            {
                printf("Your wagetable will not take this into account.\n");
            }
            else
            {
                exit(1);
            }
        
        }
        else if (vacation_days_n >= 30)
        {
            printf("Note: A vacation length longer than %d days will significantly effect your earnings.\n", vacation_country_standard_length);
        }
        else
        {
            printf("exiting programme ...");
        }
        
   
        
}


#endif



    /*
     * 
     * 
     * 
     * 
     * 
     * REMINDER: DO NOT CUT THIS TEXT, ONLY COPY !!
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
    switch (ans[0])
        {
            case 'y':
            case 'Y':
/*            case "yes":
            case "YES":
            case "Yes": 
            printf("How many days? __\b\b");
            fgets(vacation_days, BUFFER, stdin);
            vacation_days_n = atoi(vacation_days);
            vacation_taken = 1;
            printf("1) paid 2) unpaid _\b");
            fgets(vacation_paid, BUFFER, stdin);
            vacation_paid_n = atoi(vacation_paid);
            break;
        
            case 'n':
            case 'N':
            /* case "no":
            case "NO":
            case "No": 
            vacation_taken = 0;
            printf("No table to show ... exiting.\n\n");
            break; 
        }
    }
      */     
            /*
        if (vacation_taken = 1)
        {
            char table_message[MSG_BUFFER] = "--- 1) With paid vacation";
        }
        else
        {
            char table_message[MSG_BUFFER] = "--- 2) With unpaid vacation";
        } */
