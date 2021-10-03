#include<stdio.h>
#include<conio.h>
int main(){
	
	float num1,num2;
	
	printf("\n enter the first number : ");
	scanf("%f",&num1);
	printf("\n enter the second number : ");
	scanf("%f",&num2);
	
	printf("\n %f + %f =%f",num1,num2,num1+num2);
	printf("\n %f - %f =%f",num1,num2,num1-num2);
	printf("\n %f * %f =%f",num1,num2,num1*num2);
	printf("\n %f / %f =%f",num1,num2,num1/num2);
	
	return 0;
}
