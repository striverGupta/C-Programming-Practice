// write a program to print the following (3):
// 1
// 12
// 123
// 1234
// 12345
// 123456


#include <conio.h>
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d",j);
	}
	return 0;
}

