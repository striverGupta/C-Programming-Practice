// write a program to print the following pattern (2):
//  *
//  **
//  ***
//  ****
//  *****
  

 

#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("*");
	}
	
	return 0;
}
