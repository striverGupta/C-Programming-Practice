//write a program to print the multiplication
//table:
#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=20;i++)
	{
		printf("\n \n \n \t \t Multiplication table of%d",i);
		printf("\n *******************");
		for(j=1;j<=20;j++)
		printf("\t %d*%d =%d",i,j,(i*j));
		
	}
	return 0;
}   

