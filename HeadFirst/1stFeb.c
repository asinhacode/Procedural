/* Exercise on changing values of y*/
#include<stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    while ( x < 5 )
    {
        //y = x - y;

        // y = x + y;

        //y += 2;
        //if(y > 4)
        //y--;

        //x++;
        //y = y + x;

        if(y < 5)
        {
            x++;
            if(y < 3)
            x--;
        }

        y += 2;

        printf("X = %d\tY = %d\n", x, y);
        x++;
    }

    printf("--END--");
    

}