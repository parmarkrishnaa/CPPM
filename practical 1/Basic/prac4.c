// 4. Write a program that takes two separate inputs of “First Name” & “Last Name” then display the user’s Full Name (First Name + Last Name).

#include <stdio.h>
#include <string.h>

int main(){
    char firstname[20],secondname[20];

    printf("Enter your firstname: ");
    scanf("%s",&firstname);
    printf("Enter your secondname: ");
    scanf("%s",&secondname);

    strcat(firstname,secondname);
    printf("Your fullname is: %s" ,firstname);

    return 0;
}