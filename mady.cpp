//write a program enter the values and get sum,sub,mult,divid:

#include <conio.h>
#include <stdio.h>
 int main()
 {
 	
 	int num1,num2;
 	
 	
 	printf("\n enter the value of first number:");
 	scanf("%d",&num1);
 	
 	printf("\n enter the value of second number:");
 	scanf("%d",&num2);
 	
 	printf("\n %d+%d =%d",num1,num2,num1+num2);
 	printf("\n %d-%d =%d",num1,num2,num1-num2);
 	printf("\n %d*%d =%d",num1,num2,num1*num2);
 	printf("\n %d/%d =%d",num1,num2,num1/num2);
 	 	
 	return 0;
 }
