#include<stdio.h>

int main()
{
    int a[] = {10, -10, 5, -5, 0};
    printf("%d\t%d\n", &a[0], a); // array name and address of first element is the same

    int *p = &a[0];

    if(p == a)
    printf("Same address.");
}