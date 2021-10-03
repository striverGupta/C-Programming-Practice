//write a program to calculate pow(x,n)i.e.,to 
//calculate x^n.

#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int i, num,n;
	long int result =1;
	printf("\n enter the number:");
	scanf("%d",&num);
	printf("\n Till which power to calculate :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	 result  = result * num;
	 printf("\n pow(%d, %d)= %1d",num,n,result);
	 return 0;
	
	return 0;
}
