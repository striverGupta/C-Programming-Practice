 // write a program to calculate the sum of the first 10 numbers:


#include <conio.h>
#include <stdio.h>

int main()
{
	int i =0,sum =0;
	while(i<=10)
	{
		sum = sum + i;
		i=i+1;
	}
	printf("\n sum=%d", sum);
	return 0;
}
