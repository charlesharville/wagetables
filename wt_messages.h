#ifndef MESSAGES_H
#define MESSAGES_H

#define MSG_BUFFER 1024


FILE *pmsg;
FILE *perr_msg;
int r;
    
    if (pmsg == NULL) {
        printf("Cannot open file ... \n\n returning to system ... \n----------------------------\n");
        
        perr_msg = fopen("logs/errorlog.txt", "a+");
        fprintf(perr, "\nError! Could not find file. Make sure that it exists and is in the proper directory.\n");
        
        fclose(perr_msg);
        
        exit(EXIT_FAILURE);
    }

    else if (pmsg) {
        
        while ((r = getc(pmsg)) != EOF)
            putchar(r);
        
        fclose(pmsg);
    }

char changeTableMessage(char table_message[MSG_BUFFER]);

char changeTableMessage(table_message[MSG_BUFFER])
{
    
    if ((vacation_taken = 1) && (pmsg))
    {
        fgets(pmsg, MSG_BUFFER, "msg/messages");
        char table_message[MSG_BUFFER] = fopen("msg/msg1_paid-vacation.txt", "r");
    
    }
    else
    {
        char table_message[MSG_BUFFER] = fopen("msg/msg2_unpaid-vacation.txt", "r");
    }
    
    return table_message;
}
