// 3. Write a program that finds the length of your name.

#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int length;
    printf("Enter your Name: ");
    scanf("%s",&name);
 
    length=strlen(name);

    printf("Length of your name is: %d",length);

    return 0;
}