// write a program to print the following pattern(4):

#include <stdio.h>

int main()
{
	char i,j;
	for(i = 65; j<=70;i++)
	{
		printf("\n");
		for(j =65;j<=i;j++)
		printf("%c",j);
	}
	return 0;
}
