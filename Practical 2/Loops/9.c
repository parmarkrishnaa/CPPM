// 9. Check Prime Number: Create a program that takes an input number from the user and checks if it is a prime number using a `for` loop.

#include<stdio.h>

int main(){

int i,num;

    printf("Enter the number: ");
    scanf("%d",&num);

 for(i=2; i <= num / 2; i++){

    if(num%i==0){
        printf("This is not a prime number: %d",num);
    } else{
        printf("This is a prime number: %d",num);
    }
 }
    
return 0;
}
