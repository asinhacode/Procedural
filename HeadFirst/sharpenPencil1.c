/*
    array
    scanf f to an array, no & needed
    if statements
    while statements
    switch statements

*/

#include<stdio.h>

int main()
{
    
    char player[20];
    printf("Enter your name, player:\t");
    scanf("%19s", player); // no & required
    printf("Welcome %s\n", player);

    printf("Enter current count:\t");
    int card_count;
    scanf("%d", &card_count);

    

    printf("Current count:\t%d\n", card_count);

    if(card_count < 5)
    {
        while(card_count < 5)
        {
            
            switch (card_count)
            {
            case 1: case 2: case 3:
                printf("Safe, continue\n");
                card_count++;
                break;
            
            case 4:
                printf("Greed!\n");
                card_count++;
                break;

            default:
                printf("Too hot, its suicide!. I fold!\n");
                break;
            }
            //puts("Hot deck, increase bet\n");

            printf("Current count:\t%d\n", card_count);
        }

    }

    else
    {
        printf("Too wierd to worry about!\n");
    }
    

    printf("Thank you for playing %s\n", player); // return the entire string
    
}