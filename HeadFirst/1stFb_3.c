// latitude - north and south
// longitudes - east and west

// south_east - decrease latitude and increase longitudes
#include<stdio.h>

void go_south_east(int lat, int lon) // changes local copy value
{
    printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);
    printf("Current Position:\t[lat, lon]\t: [%p, %p]\n", &lat, &lon);

    lat--; // down
    lon++; // east

    printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);
    printf("Current Position:\t[lat, lon]\t: [%p, %p]\n", &lat, &lon);


}

void go_south_east_withPointers(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;

    printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", *lat, *lon);
    printf("Current Position:\t[lat, lon]\t: [%p, %p]\n", &lat, &lon);
}

int main()
{
    int lat = 90;
    int lon = 45;
    printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);
    printf("Current Position:\t[lat, lon]\t: [%p, %p]\n", &lat, &lon);

    // storing the address--
    int *address_of_lat = &lat; 
    int *address_of_lon = &lon;

    go_south_east_withPointers(&lat, &lon); // send the address location
   // printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);

   // printf("Current Position:\t[lat, lon]\t: [%d, %d]\n",  *address_of_lat, *address_of_lon); // access the contents
    // *  = dereference pointer

    //*address_of_lon += 5; // goes to the address and changes the actual value! -- no copy
    //printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);

   // go_south_east(lat, lon); // different address
    // copy sent, pass by value

   // printf("Current Position:\t[lat, lon]\t: [%d, %d]\n", lat, lon);
    //printf("Current Position:\t[lat, lon]\t: [%p, %p]\n", &lat, &lon); // same address

   

    
}

