//  Write a program that accepts a number from 1 to 10. Print whether 
//  the number is even or odd  using a switch case construct.


#include <conio.h>
#include <stdio.h>

int main()
{
	int num;
	printf("\n Enter any number (1 to 10):");
	scanf("%d", &num);
	switch (num)
	
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			printf("\n odd");
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			printf("\n even");
			break;
		default :
			printf("\n invlaid  input");
			break;
	}
	return 0;
}

