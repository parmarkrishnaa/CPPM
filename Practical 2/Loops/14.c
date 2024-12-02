// 14. Write a program that takes an integer as input and counts the number of digits using a while loop.

#include<stdio.h>

int main(){
    int num,count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0){
        num /= 10;
        count++;
    }
    printf("Number of digits: %d", count);

    return 0;
}