// 2. Even Numbers with `for` Loop: Create a program that prints all even numbers between 1 and 20 using a `for` loop.

#include <stdio.h>

int main(){
    int i;

    for( i = 2; i < 20; i += 2 ){
        printf("%d ",i);
    }

    return 0;
}