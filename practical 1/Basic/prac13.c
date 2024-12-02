// 13. Write a program to swap the values between two variables.(By using a third variable.)

#include<stdio.h>

int main(){
	int num1, num2, temp;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	printf("Swap value of num1 is %d\n",num1);
	printf("Swap value of num2 is %d\n",num2);
	
	return 0;
}
