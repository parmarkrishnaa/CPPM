//  Create a program that takes a start and an end value as input and calculates the sum of even numbers and the sum of odd numbers within that range. Print both sums separately.

#include <stdio.h>

int main() {
    int num1, num2, even = 0, odd = 0,i;

    printf("Enter the start value: ");
    scanf("%d", &num1);

    printf("Enter the end value: ");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            even += i;
        } else {
            odd += i;
        }
    }

    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);

    return 0;
}
