#include<stdio.h>
   void skip6(char *msg)
    {
        puts(msg + 7);
    }

int main()
{
    int drinks[] = {4, 2, 3};

    // drinks[0] == *drinks
    //printf("First Up:\t%i", drinks[0]);
    //printf("First Up:\t%i", *drinks);

    for(int i = 0; i < 3; i++)
    {
       printf("First Up:\t%i\n", *(drinks + i));
    }

    char *msg =   "Don't call me!";
    skip6(msg);

}