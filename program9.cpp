//write a program to perform all logical operators

#include <conio.h>
#include <stdio.h>
int main()
{
	int a,b;
	a = 5;
	b = 3;
	printf("%d>%d||%d<%d = %d \n",a,b,a,b,a>b||a<b);	 
	printf("%d==%d|| %d>%d = %d \n",a,b,a,b,a==b||a>b);
	printf("%d>%d && %d<%d =%d \n",a,b,a,b,a>b&&a<b);
	printf("%d==%d&& %d>%d = %d \n",a,b,a,b,a==b&&a>b);
	printf("%d>%d && %d != %d = %d \n",a,b,a,b,a>b &&a!=b);
	 
	
	
	return 0;
}
