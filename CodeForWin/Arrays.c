#include<stdio.h>
#include<limits.h>

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
    int a[5] = {77,6,9,4,-9};
    int *p = a;
    int largest = *p;

        for(int i = 0; i < 5; i++)
        {
            p++;
            if(largest < *p)
            largest = *p;
        }

        p = a; // start of the array
        

        int second = INT_MIN;
        for(int i = 0; i < 5; i++)
        {
            p++;
            if(second < *p && *p != largest)
            {
                second = *p;
            }
        }
        printf("%d\n%d\n", largest, second);
}

void countEvenOdd()
{
     int a[9] = {77,6,9,4,-9,669,43,2,100};
     int *p = a;
     int even = 0;
     int odd = 0;


        for(int i = 0; i < 9; i++)
        {
            if(*p % 2 == 0)
            {
                even++;
            }

            else
            {
                odd++;
            }

            p++;
            
        }

        printf("Even:%d\tOdd:%d\n", even, odd);
     
}

void countNegative()
{
    int a[9] = {-77,6,9,4,-9,669,43,2,-100};
    int *p = a;
    int negative = 0;

    for(int i = 0; i < 9; i++)
    {
        if(*p < 0)
        negative++;

        p++;
    }

    printf("Total Negative: %d\n", negative);
}

void copy()
{
     int a[9] = {-77,6,9,4,-9,669,43,2,-100};
     int *p = a;

     int b[9];
     for(int i = 0; i < 9; i++)
     {
         b[i] = *p;
         printf("%d\t", b[i]);
         p++;
     }
}

void insert()
{
    int a[9] = {-77,6,9,4,-9,669,43,2,-100};
    int size = 9;
    int *p = a;

    printf("Original\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", *p);
        p++;
    }

    p = a;

    printf("\n");
    printf("Enter an index:\t"); // get the index
    int index;
    scanf("%d", &index);

    if(index > size || index < 0)
    printf("Wrong index!");

    else
    {
        printf("Enter the updated number:\t");
        int update;
        scanf("%d", &update);

        // change
        int i = 0;
        for(; i < index; i++);
        a[i] = update;

    }

    for(int i = 0; i < size; i++)
    {
        printf("%d\t", *p);
        p++;
    }

    p = a; 
}


int main()
{
   
    // inAndOut();
    // sumArray();
    // inAndOut2();
    //findMinMax();

    //secondLargest();
    //countEvenOdd();
    //countNegative();
    //copy();

    insert();

}

https://codeforwin.org/2015/07/c-program-to-insert-element-in-array.html
