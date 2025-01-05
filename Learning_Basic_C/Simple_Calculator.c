#include <stdio.h>
#include <math.h>

int calculator(int num1, int num2){
   return num1 + num2;
   
}

int main(){
    int num1; 
    int num2;
    int sum_total;

   
        printf("Enter a number: ");
        scanf("%d",&num1);
   

   
        printf("Enter a number: ");
        scanf("%d",&num2);
        

        sum_total = calculator(num1,num2);
    printf("The sum of %d and %d is %d \n", num1, num2, sum_total);
    return 0;

}