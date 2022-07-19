#include <stdio.h>

int main(void)
{
 
    char ans[1];
    
    printf("Do you want to loop this prompt? y/n... _\b");
    fgets(ans, 2, stdin); /* takes a string, so make room for the null zero ! */
    
    if (ans[0] == 'y' && ans[1] == '\n')
    {
        
        printf("yes.\n");
        for (int i = 0; i <= 14; i++)
        {
            printf("but this is not the prompt... _\b\n");
        }
    }
    else if (ans[0] == 'n' && ans[1] == '\n')
    {
        printf("no.\n");
    }
    else
    {
        printf("nothing.\n");
    }
    
    return 0;
}
