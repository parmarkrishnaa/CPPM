// 8. Write a program to show the use all the relational operators:- f. Less than or equals to:

#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	if(num1<=num2){
		printf("Num1 is less than or equals to Num2");
	}
	return 0;
}
