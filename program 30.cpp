//write largest number by using tenary operator:(conditional operatar)
#include <conio.h>
#include <stdio.h>

int main()
{
	int i=0,large=-1,num;
	while(i<=5)
	{
		printf("\n enter the number:");
		scanf("%d",&num);
		large =num>large?num:large;
		i++;
	}
	    printf("\n the largest six numbers entered is: %d",large);
	return 0;
}
