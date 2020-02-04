#include<stdio.h>
const int size = 5;

int ten[size];

void printBack();
void inReverse();
void enterData();
void sum();
void copy();
void duplicate();

int main()
{
    // printBack();
    // inReverse();
    // sum();
    // copy();
    // duplicate();

    onlyUnique();

}
void enterData()
{
  
    printf("Enter %d numbers:", size);

    for(int index = 0; index < size; index++)
    {
        scanf("%d", &ten[index]);
    }
}

void printBack()
{
    enterData();

    printf("\n");
        for(int index = 0; index < size; index++)
        {
            printf("%d\n", ten[index]);
        }

}

void inReverse()
{
    enterData();
     printf("\n");
        for(int index = size - 1; index > -1; index--)
        {
            printf("%d\n", ten[index]);
        }
}

void sum()
{
    enterData();
    int sum = 0;

            for(int index = size - 1; index > -1; index--)
            {
                sum += ten[index];
            }

                printf("Sum is :%d\n", sum);


}

void copy()
{
    enterData();
    int copy[size];

        for(int index = 0; index < size; index++)
        {
            copy[index] = ten[index];
        }

        printf("\n");
        for(int index = 0; index < size; index++)
        {
            printf("%d\n", copy[index]);
        }
}

void duplicate()
{
    enterData();
    // 1 2 3 2 1 
    int same = 0;

    int copy[size];

        for(int index = 0; index < size; index++)
        {
            copy[index] = ten[index];
        }

        for(int index = 0; index < size; index++)
        {
            for(int index1 = (index + 1); index1 < size; index1++)
            {
                if(ten[index] == copy[index1])
                {
                    same++;
                }
            }

        }

        printf("Same:\t%d", same);


}

void onlyUnique()
{
    enterData();

     int copy[size];

        for(int index = 0; index < size; index++)
        {
            copy[index] = ten[index];
        }

        

}