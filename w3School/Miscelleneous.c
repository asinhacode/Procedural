#include<stdio.h>
// global variables
int aSize;
int myA[500]; // must have a starting size


void getArrayInfo() // get array size and elements from user
{
    printf("Enter arraySize:\t");
    
    scanf("%d", &aSize);
    myA[aSize];

    printf("Enter its members:\t");
    int index = 0;
    while(index < aSize)
    {
        scanf("%d", &myA[index]);
        index++;
        printf("Enter its members:\t");

    }

}
// prints everything placed inside the array
void inAndOut()
{

 getArrayInfo();

   int index = 0;
    while(index  < aSize)
    {
        //printf("%d  ", myA[index]);
        printf("%d ", *(myA + index));
        index++;
    }

    printf("\n");
}

void sumArray()
{
    getArrayInfo(); // places all the elements inside the array
    int sumTotal = 0;

    for(int i = 0; i < aSize; i++)
    {
        sumTotal += *(myA + i);
    }

    printf("Sum of the array is %d\n", sumTotal);
}

void inAndOut2()
{
    printf("Enter array size:\t");
    int size;
    scanf("%d", &size);

    int arr[size];
    int *p = arr; // point to the first element

        for(int i = 0; i < size; i++)
        {
            printf("Members:\t");
            scanf("%d", p);

            p++; // go to the next location
        }

        p = arr; // go to the front

        for(int i = 0; i < size; i++)
        {
            printf("%d ", *p);
            p++;
        }
}

void findMinMax() // using pointers
{
    printf("Enter array size:\t");
    int aSize;
    scanf("%d", &aSize);

    int array[aSize];
    int *p = array; // pointing to the first element

        for(int i = 0; i < aSize; i++)
        {
            printf("Enter members:\t");
            scanf("%d", p);
            p++;
        }

            p = array;
            int min = *p, max = *p; // both first element

            for(int i = 0; i < aSize; i++)
            {
                p++;

                if(min > *p)
                {
                    min = *p;
                }

                if(max < *p)
                {
                    max = *p;
                }
            }

            printf("Min is :\t%d\nMax is :\t%d\n", min, max);

}

void secondLargest() // not done yet
{
    printf("Enter array size:\t");
    int aSize;
    scanf("%d", &aSize);

    int array[aSize];
    int *p = array; // pointing to the first element

        for(int i = 0; i < aSize; i++)
        {
            printf("Enter members:\t");
            scanf("%d", p);
            p++;
        }

            p = array;

            // array has the numbers
            int largest = *p;

            for(int i = 0; i < aSize; i++)
            {
                p++;
                if(largest < *p)
                {
                    largest = *p;
                }
            }
            // got the largest

            p = array; // go to start
            int second = *p;

                for(int i = 0; i < aSize; i++)
                {

                    p++;

                    if(*p != largest && second < *p)
                    {
                        second = *p;
                    }
                    
                    else
                    continue; 
                }

    printf("Largest : %d\t and secondLargest:\t%d\n", largest, second);

}
int main()
{
   
    // inAndOut();
    // sumArray();
    // inAndOut2();
    //findMinMax();

    secondLargest();

}

