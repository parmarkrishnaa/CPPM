// 5. Sum of Natural Numbers: Create a program using a `for` loop to calculate and print the sum of the first 10 natural numbers.

#include<stdio.h>

int main(){
     
     int i,sum=0;

     for(i=1; i<=10; i++){
        sum += i;
     }

     printf("the sum of number is %d",sum);
     
     return 0;

}