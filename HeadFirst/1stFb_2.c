#include<stdio.h>

int y = 1; // global

int main()
{
    int x = 0; // stack storage

    printf("Global Y:\t%p\n", &y);
     printf("From Stack X:\t%p\n", &x);

}