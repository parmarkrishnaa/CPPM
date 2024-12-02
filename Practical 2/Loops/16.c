// 16. Write a program that takes an integer input from the user and checks if it is a palindrome (reads the same forwards and backwards). Print whether the number is a palindrome or not.Write a program that takes an integer input from the user and checks if it is a palindrome (reads the same forwards and backwards). Print whether the number is a palindrome or not.

#include<stdio.h>

int main(){
    int num,rem,temp,rev=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;

    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev){
        printf("This number %d is palindrome.",temp);
    }else{
        printf("This number %d is not palindrome.",temp);
    }
    return 0;
}