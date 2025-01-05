#include <stdio.h>

int main()

{
    //dowhile loop always executes a block of code once, THEN checks a condition.

    int number = 0;
    int sum = 0;
    
   
    do{
    printf("Enter a number above 0: ");
    scanf("%d", &number);

    if(number > 0)
    {
       sum += number;
   }

   
    }
    while(number > 0);
    printf("The sum of the numbers is %d ",sum);
    return 0;
}