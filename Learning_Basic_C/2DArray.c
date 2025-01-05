#include <stdio.h>

int main()

{
    // 2D array = an array, where each element is an entire array useful if you need 
    //matrix, grid, or table of data.


    // In a 2d array we make use of 2 square brackets, the first square bracket is to define the
    //the rows of the array and it is optional. The second one is important and it is used to define the number 
    //of columns in the array inline. But regardless try to always specify both dimensions. 
  
  //creating a static 2d-array will look like:
   /* int numbers[2][3]={
                      {1,2,3},
                      {4,5,6}
                        };
*/

/*To iterate through the 2D-array, we can introduce new variables such as below:

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
*/

// creating an empty 2d-array and adding elements to it will look like:

int numbers[2][3];

numbers[0][0] = 1;
numbers[0][1] = 2;
numbers[0][2] = 3;
numbers[1][0] = 4;
numbers[1][1] = 5;
numbers[1][2] = 6;

//how to print the values of a 2d array? It literally uses a nested for loop.
// The outer loop iterates through the rows, and the inner loop iterates through the columns of each row.
 
for (int i = 0; i <sizeof(numbers)/sizeof(numbers[0]);i++) {

for(int j = 0; j <sizeof(numbers[0])/sizeof(numbers[0][0]); j++)
{
   printf("%d ",numbers[i][j]);
}
printf("\n");
}

    return 0;
}