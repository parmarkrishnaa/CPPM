// 12. Write a program to show the working of increment and decrement operators.


#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Increment: %d\n", number++);
    printf("Value after Increment: %d\n", number);

    printf("Decrement: %d\n", number--); 
    printf("Value after Decrement: %d\n", number);

    return 0;
}

