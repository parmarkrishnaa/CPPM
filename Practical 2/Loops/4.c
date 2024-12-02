// 4. Simple `do-while` User Input: Write a `do-while` loop program that asks the user for a number and prints it, continuing until the user inputs 0.

#include<stdio.h>

int main(){
    int i;

    do{
        printf("Enter a number: ");
        scanf("%d",&i);

    }while (i != 0);

    printf("You have exited the program.\n",i);

    return 0;
}
