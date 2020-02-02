#include<stdio.h>

void incrementer(int *x)
{
    *x = *x + 1; // fishy
}
int main()
{
    int x = 0;
    printf("%d\n", x);

    for(int i = 0; i < 5; i++)
    {
            incrementer(&x);

    }
    printf("%d\n", x);
}