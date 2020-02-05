#include<stdio.h>
 int main()
 {
     /*
     int doses[] = {1, 3, 2, 1000};

     // printf("Issue dose %i", 3[doses]);

     int v1, *p1;
     v1 = 29;
     p1 = &v1;

     printf("%d\n", *p1);
     *p1 += 1;
     printf("%d\n", *p1);

    printf("%d\n", v1);

    */

   int x, y, *p;

   x = 1;
   y = x;

   printf("x = %d, y = %d and p = %d\n", x, y, *p);

   y++;
   printf("x = %d, y = %d and p = %d\n", x, y, *p);

   p = &x;
    printf("x = %d, y = %d and p = %d\n", x, y, *p);

    *p -= 1;
   printf("x = %d, y = %d and p = %d\n", x, y, *p);

   
        x++;
    
   printf("x = %d, y = %d and p = %d\n", x, y, *p);

    int *q = &y;
    printf("x = %d, y = %d and p = %d, q = %d\n", x, y, *p, *q);


    *q += 10;
    printf("x = %d, y = %d and p = %d, q = %d\n", x, y, *p, *q);

    y = *p;
    printf("x = %d, y = %d and p = %d, q = %d\n", x, y, *p, *q);

    y--;
    printf("x = %d, y = %d and p = %d, q = %d\n", x, y, *p, *q);


    int a, b, *c, *d;
    a = 8;
    b = 9;

    c = &a;
    d = &b;

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, *c, *d);

    c = d;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, *c, *d);

    





 }