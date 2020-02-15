#include<stdio.h>

// global
int x = 10; // stored in global area of memory
int *q = &x;

void increment(int *x)
{
    *x += 1; // increase the value by dereferencing the value at that address
}

void decrement(int *x1)
{
    *x1 -= 1;
    printf("%d\n", *x1);
}

void multiplyTwo(int *star)
{
    *star *= 2;
    printf("%d\n", *star);
}

void subtract(int *first, int *second)
{
    printf("%d\n", *first - *second);
}

int main()
{
    int x = 3; // stored in stack

    int *p; // pointer declaration
    p = &x; // assign the memory address

   // printf("Internal:\t%p\n", p);
   // printf("External:\t%p\n", q);

    increment(p); // send the memory address

    printf("Internal X = %d\n", x);

    int y = 0;
    int *x1;
    x1 = &y;

    decrement(x1);
    multiplyTwo(p);

    subtract(x1, p);
    multiplyTwo(p);
    subtract(&y, &x); // same as sending a pointer

}

