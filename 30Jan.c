// NOT 0 is true so any value 4, 98, anything is true
#include<stdio.h>

int main()
{
    int day = 0;
    if(day)
    {
        printf("Keep working, not the weekend yet...\n");
    }

    else
    {
        printf("%s\n", "WEEKEND ... LOVING IT...");
    }
    
}