// 8. Write a program to show the use all the relational operators:- e. Greater than or equals to:

#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	if(num1>=num2){
		printf("Num1 is greater than or equals to Num2");
	}
	return 0;
}
