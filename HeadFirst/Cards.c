#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];

    int value = 0;

    puts("Enter the card_name:\t");
    scanf("%2s", card_name);

    while(card_name[0] != 'E')
    {
        if((card_name[0] == 'K') || (card_name[0] == 'Q') || (card_name[0] == 'J'))
        {
            value += 10;
        }

        else if(card_name[0] == 'A')
        {
            value += 11;
        }

        
        else
        {
            value += atoi(card_name);
        }

            if(value > 21)
            {
                 
                printf("Game over!!");
                value = 0;
                break;
            }
        printf("Value is %d\n", value);

         puts("Enter the card_name:\t");
         scanf("%2s", card_name);
    
    }
}