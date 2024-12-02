// 11. Write a program to find the minimum of two numbers.


#include <stdio.h>

int main()
{
  int num1, num2;
  
  
  printf("Enter Num1: ");
  scanf("%d",&num1);
  printf("Enter Num2: ");
  scanf("%d",&num2);
 
  if(num1<num2){
      printf("Num1 is minimum");
  }else{
      printf("Num2 is minimum");
  }
    return 0;
}
