#include <conio.h>
#include <stdio.h>
int main()
{
	int i;
	int m =1990,n=2100;
	do
	{
		if (i %4==0)
		printf("\n %d is a leap year",m);
		else
		printf("\n %d is not a leap year",m);
		m =m+1;
	}while (m<=n);
	     return 0;
	
	
	
}
