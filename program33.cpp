//to program to calculate the average the first  numbers:


#include <conio.h>
#include <stdio.h>
int main()
{
	int n,i=0,sum=0;
	float avg =0.0;
	printf("\n enter the value of the n :");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i=i+1;
	}while(i<=n);
	
	avg =sum/n;
	printf("\n the sum of the first n numbers= %d",sum);
	printf("\n the average of first %d numbers =%f",n,avg);
	
    return 0;
}
