// write a program to enter a number and the calculate the sum of its
// digits:

#include <stdio.h>
#include <conio.h>
int main()
{
	int num, temp, sumofdigits = 0;
	int();
	printf("\n Enter the value of number:");
	scanf("%d", &num);
	
	while(num != 0)
	{
		temp = num%10;
		sumofdigits += temp;
		num= num/10;
	}	
	printf("\n the sum of digits = %d", sumofdigits);
	return 0;
}
