/* wt_handlers.h - handles all prompts with y/n logic, whether called from main(), or somewhere else */
#ifndef WT_HANDLERS_H
#define WT_HANDLERS_H

#define BUFFER 64

char wage[BUFFER];
char hours[BUFFER];
char vacation_days[BUFFER];
float wage_f;
int hours_n;
int vacation_days_n;
char ans[1];
int vacation_taken;
char vacation_paid[BUFFER];
int vacation_paid_n;

/* function prototypes below ... */
void getWage(void);
void getHours(void);
void getVacation(void);

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
    printf("What are your hours? __\b\b", hours_n);
    fgets(hours, BUFFER, stdin);
    hours_n = atoi(hours);
}

void getVacation(void) /* find whether the user take a vacation, and whether it is paid or unpaid */
{

    printf("Do you take a vacation? y/n ...");
    fgets(ans, 2, stdin); /* takes a string, so make room for the null zero ! */
    
    if (ans[0] == 'y')
    {
        printf("How many days? __\b\b");
        fgets(vacation_days, BUFFER, stdin);
        vacation_days_n = atoi(vacation_days);
        vacation_taken = 1;
        
    }
    else if (ans[0] == 'n')
    {
        printf("no.\n");
    }
    else
    {
        printf("nothing.\n");
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
