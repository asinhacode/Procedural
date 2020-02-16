#include<stdio.h>

/* 

void increment(int *pointer)
{
    *pointer += 1;
}

int main()
{
    int a = 10;
    int *b;
    b = &a;

    increment(&a);
    increment(b);

    printf("Value of a \t%d"+ a);
} 

*/
void skip5(char *p )
{
    puts(p + 5);
   // puts(*(p + 5));
}
int main()
{
    int contestants[] = {1, 10, 100};
    int *p = contestants;

    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);

    char s[] = "Hello World!";
    printf("%d\n", sizeof(s)); // added 1 for \0

    printf("%d\n", contestants[0]);
    printf("%d\n", *contestants);

    char t[] = "I am,whoever I say I am.";
    skip5(t);

}

