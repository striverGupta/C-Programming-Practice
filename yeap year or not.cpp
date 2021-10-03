#include <stdio.h>
#include <conio.h>
int main(){
	
	int year;
	printf("\n enter the year :");
	scanf("%d",&year);
	
	if((year%4==0)&&(year%100!=0) || (year%400 == 0))
	 printf("\n leap year");
	 else
	 printf("\n not a leap year");
	 	
	return 0;
}
