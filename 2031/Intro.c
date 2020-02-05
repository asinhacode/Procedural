#include<stdio.h>

void greetings();


int binarySearch(int target, int data[], int sizeData)
{
    int low, mid, high;

    low = 0;
    high = sizeData - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

            if(target < data[mid])
            {
                high = mid + 1;
            }

            else if(target > data[mid])
            {
                low = mid + 1;
            }

            else // found match
            {
                return mid;
            }
            
    }

    return -1;


}
int main()
{
    //greetings();
    int data[] = {-12, -6, 0, 66, 564, 1000};
    printf("Hello\n");
    printf("%d\n", binarySearch(4, data, 6));

}

void greetings()
{
char greeting[] = "Hello!";
    int age[5] = {29, 36}; // 0 to 4
    // rest remain 0

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", age[i]);
    }
        printf("\n");

    age[0]++; // increase the value at index 0 by 1
      for(int i = 0; i < 5; i++)
    {
        printf("%d\t", age[i]);
    }  
            printf("\n");

for(int i = 0; i < 5;)
    {
        printf("%d\t", age[i++]);
    }  
            printf("\n");

/*
for(int i = 0; i < 5;)
    {
        printf("%d\t", age[++i]);
    }  
            printf("\n");
            */

         int dob[5] = {91, 50, 58, 82, 82};
            for(int i = 0; i < 5; i++)
            {
                if(dob[i] % 2 != 0) // skip odd years
                continue;

                else
                {
                    if((dob[i] % 10) % 2 == 0)
                        printf("UNLUCKY!\t");
                    printf("%d\t", dob[i]);
                }
                
            }  
}
