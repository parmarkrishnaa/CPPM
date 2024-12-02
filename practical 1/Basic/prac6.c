// 6. Write a program to find the square root of any number.

#include <stdio.h>

int main(){
    int num, res;

    printf("Enter your num: ");
    scanf("%d",&num);

    res=sqrt(num);
    printf("%d",res);

    return 0;
}