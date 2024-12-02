// 18. Nested loop Switch case calculator.

#include<stdio.h>

int main(){
    int num1,num2,i;
    char ch;

    printf("Enter your expression: ");
    scanf("%c",&ch);
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    switch(ch){
        case '+':
            printf("Addition: %d",num1+num2);
        break;
        case '-':
            printf("Subtraction: %d",num1-num2);
        break;
        case '*':
            printf("Multiplication: %d",num1*num2);
        break;
        case '/':
            printf("Division: %d",num1/num2);
        break;
        case '%':
            printf("Modulus: %d",num1%num2);
        break;
        default:
            printf("Invalid Choice!!!");
    }
    do{
        printf("\nEnter a number: ");
        scanf("%d",&i);
    }while (i != 0);

    printf("You have exited the program.\n",i);

    return 0;
}