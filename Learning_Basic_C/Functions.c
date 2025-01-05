#include<stdio.h>

int add(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1-num2;
}

int multiply(int num1, int num2){
     return num1*num2;
}

int divide(int num1,int num2){
    return num1/num2;

}

int main(){
    int num1;
    int num2;
    char symbol;

    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter another number: ");
    scanf("%d",&num2);
    printf("Enter a mathematical operator: ");
    scanf(" %c", &symbol);

    switch (symbol)
    {
    case '+':
       
        printf("%d\n",add(num1,num2));
        break;
    case '-':
       
        printf("%d\n",subtract(num1,num2));
        break;

    case '*':
       
        printf("%d\n",multiply(num1,num2));
        break;
    
    case '/':
       
        printf("%d\n",divide(num1,num2));
        break;
    default:
        printf("Error: Invalid operator. \n");
        break;
    }

return 0;


}