#include <stdio.h>
#include <conio.h>
int main(){
	
	int num1,num2,num3,large;
	
	printf("\n ener the first number :");
	scanf("%d",&num1);
	printf("\n ener the second number :");
	scanf("%d",&num2);
	printf("\n ener the third number :");
	scanf("%d",&num3);
	
	large=num1>num2?(num1>num3? num1:num3):(num2>num3? num2:num3);
	printf("\n the largest number : %d ",large);
	
	
	return 0;
}
