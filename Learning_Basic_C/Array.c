#include <stdio.h>
#include <math.h>

int main()

{
   // array = a data structure that can store many values of the same data type only.
   // They are limited in operations and usually have fixed values.
   // They are fast for accessing elements due to their contiguous memory layout.

   double prices[] = {5.0,10,15,20,25};
   //printf("$%.2lf",(prices[0] + prices[1]));
   //char name[] ="Bro";

   //creating an empty array with the size
   //double prices[5];

   // adding to an empty array
   //prices[0] = 5.0;
   //prices[1] = 10.0;

   //Loop through the element of an array in C

   for(int i=0; i<=sizeof(prices)/sizeof(prices[0]);i++) {

    printf("%.2lf\n",prices[i]);

   }
    return 0;
}