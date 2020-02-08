#include<stdio.h>

int main()
{
    /*
    char first[10];
    printf("Enter your first name:\t");
    scanf("%14s", first); // going to update the contents of the array

    char last[10];
    printf("Enter your last name:\t");
    scanf("%14s", last);

    printf("%s-%s\n", last, first);
    */

   // fgets()
/*
    char first[10];
    printf("Enter your first name:\t");
    fgets(first, sizeof(first), stdin);

    printf("%s\n", first);
*/

    char *cards = "JQK"; 
    char a_card = cards[2]; 
    cards[2] = cards[1]; 
    cards[1] = cards[0]; 
    cards[0] = cards[2]; 
    cards[2] = cards[1]; 
    cards[1] = a_card; 
    puts(cards);
return 0;


}