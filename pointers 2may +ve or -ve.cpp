#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	int *pnum=&num;
	
	printf("\n enter the number :");
	scanf("%d",pnum);
	
	if (*pnum>0)
	printf("\n the number is positive");
	else
	printf("\n the number is negative");
	
	
	
	return 0;
}
