#include <conio.h>
#include <stdio.h>
int main()
{
	char i,j;
	for(int i=97;i<=122;i++)
	{
		printf("  \n  ");
		for(int j=97;j<=i;j++)
	   		printf("%c",j);	
	}
	
	return 0;
}
