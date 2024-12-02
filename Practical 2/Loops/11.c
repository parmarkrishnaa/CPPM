// 11. Write a program to generate and print the first 15 terms of the Fibonacci series using a simple for loop.

#include <stdio.h>

int main() {
    int n,i;
    int first = 0, second = 1, result;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            result = first + second;
            first = second;
            second = result;
            printf("%d ", result);
        }
    }

    printf("\n");
    return 0;
}
