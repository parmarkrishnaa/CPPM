// 2. Write a program that asks the user for their name and then display it again.

#include <stdio.h>

int main(){
    char name[20];

    printf("Enter your Name: ");
    scanf("%s",&name);

    printf("Your name is %s",name);

    return 0;
}