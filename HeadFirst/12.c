/*
    String s = "Apple"; stored as : 'a' 'p' 'p' 'l' 'e'
    So, apple = a _ p _ p _ l _ e _ \0 - 'Sentinel character' added to know where the array ends
*/
#include<stdio.h>

int main()
{
    // card_name[0], card_name[1] and card_name[2] can be used to store char but char_name[3] is for sentinel value \0 so size increased by 1
 /*  
    char card_name[3]; 
    card_name[0] = 3;
    printf("%d\n", card_name[0]);
    card_name[1] = 4;
    printf("%d\n", card_name[1]);
    card_name[2] = 1;
    printf("%d\n", card_name[2]);
    printf("%s\n", card_name);
*/
    /*
        " " used for String and ' ' used for single characters
        String literals are CONSTANTS, It means that you can’t change the individual characters once they are created.
    */

   char card_name[3]; 

   puts("Enter the card_name:");
   scanf("%2s", card_name); 

   int val = 0;
   switch(card_name[0])
   {
       case 'K': 
       case 'Q': 
       case 'J': 
       case 'A':
        val = 10;
        break;
    
        default:
        val = atoi(card_name[0]); 
        break;
   }

    printf("\nThe card value is:%d", val);


}