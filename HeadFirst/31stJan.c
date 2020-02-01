/*
    breaks : get out of the whole loop

    continue: ignore the loop body once
*/
#include<stdio.h>

void switch1()
{
    int input;
    int val = 0;
    printf("Enter a number between 0 - 9 (-1 to exit)\t");
    scanf("%d", &input);

    while(input != -1)
        {
            
            switch (input)
            {
                case 0: 
                case 1: 
                case 2:
                {
                val++;
                printf("Low-- go high\n");
                break;
                }

                case 3: 
                case 4: 
                case 5:
                {
                printf("Stay-- unsure\n");
                break;
                }

                case 6: 
                case 7: 
                case 8: 
                case 9:
                {
                printf("Don't bet, go low\n");
                val--;
                break;
                }

                
                default:
                    break;
            }

         printf("Enter a number between 0 - 9\t");
         scanf("%d", &input);
        }
        printf("After game, current value:\t%d\n", val);
        printf("Exited- thanks for playing!\n");


}



void simpleFor(int start, int end, int increment)
{
    int count;

    for(count = start; count <= end; count += increment)
        {
            printf("Count is:\t%d\n", count);

        }

}

int main()
{
    //switch1();
    simpleFor(33, 54, 6);

}

    
