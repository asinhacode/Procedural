/*
    Using a function to seperate task
*/

#include <stdio.h>
#include <stdlib.h>

int testValue(char);
void getInfo();

char card_name[3];
int value = 0;

int main()
{
    getInfo();

    while(card_name[0] != 'E')
    {
       
            int value = testValue(card_name[0]);
            if( value > 21)
            {
                 
                printf("Game over!!\n");
                value = 0;
                break;
            }
        
            printf("Value is %d\n", value);
            getInfo();
    
    }
}

    int testValue(char test)
    {
         switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                value += 10;
                break;
            
            case 'A':
                value += 11;
                break;

            default:
                value += atoi(card_name);
                break;
        }

        return value;
    }

    void getInfo()
    {
         puts("Enter the card_name:\t");
         scanf("%2s", card_name);
    }

