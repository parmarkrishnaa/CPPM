// 17. Make a user-friendly basic calculator(addition,subtraction,multiplication,division,modulus).

#include<stdio.h>

int main(){
	int num1,num2,res;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	printf("Enter your expression: ");
	scanf("%d",&res);
	
	switch(res){
		case 1:
			printf("Addition: %d",res=num1+num2);
			break;
		case 2:
			printf("Subtraction: %d",res=num1-num2);
			break;
		case 3:
			printf("Multiplication: %d",res=num1*num2);
			break;
		case 4:
			printf("Division: %d",res=num1/num2);
			break;
		case 5:
			printf("Modulus: %d",res=num1%num2);
			break;
		default:
			printf("Invalid Choice!!!");	
	}
	
	return 0;
}
