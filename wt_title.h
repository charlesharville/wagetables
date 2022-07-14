#ifndef WT_TITLE_H /* if TITLE_H is not defined, */
#define WT_TITLE_h /* we define it here. This is to prevent the header from compiling more than once;
                   we could also use the non-standard preprocessor directive #pragma once. */

#define WT_TITLE_BUFFER 8192 /* Here, we define the constant BUFFER to a maximum of 8192 bytes.
                            This is more than enough to handle all the characters used in the title screen text. */   
void displayWageTablesTitle(void); /* This is for either the standalone or EBW-implemented title. */

void displayWageTablesTitle(void) {
 
    FILE *p_wt_title;
    FILE *p_wt_err;
    int r;
    
    p_wt_title = fopen("displays/wt_title.txt", "r");
    
    if (p_wt_title == NULL) {
        printf("Cannot display title: no .txt file is available.\nCheck the wagetables/displays to make sure it is there.");
    
        p_wt_err = fopen("logs/wt_errorlogs.txt", "");
        fprintf(p_wt_err, "\n");
        
        fclose(p_wt_title);
    
        exit(EXIT_FAILURE);
    }
    
    else if (p_wt_title) {
    
        while ((r = getc(p_wt_title)) != EOF)
            putchar(r);
        
        fclose(p_wt_title);
    }

}
    
#endif /* WT_TITLE_H */
