// 12. Create a program that takes a number as input and prints its reverse using a while loop.

#include <stdio.h>

int main(){
    int num,rev=0,rem;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        }
        printf("Reverse of the number is: %d",rev);
    
    return 0;
}