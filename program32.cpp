//switch case:
//To display a menu that offers five options:read three 
//numbers,calculate total,calculate average,display the
//smallest, and display the largest value.

#include <conio.h>
#include <stdio.h>
int main()

{
	int num, sum;
	   printf("\n enter the numbers(1 to 10):");
	   scanf("%",&num);
	switch(num,sum)
	{
		case'1':printf("\n read three numbers");
		        scanf("%d",&num);
		break;
		case'2':printf("\n calculate total numbers");
		        scanf("%d",&sum);
		break;
		case'3':printf("\n calculate average");
		        scanf("%d",&num);
		break;
		case'4':printf("\n display the smallest");
		        scanf("%d",&num);
		break;
		case'5':printf("\n display the largest value");
		        scanf("%d",&num);
		break;
		default:printf("\n invalid");
		break;
		
	}
	return 0;
}

