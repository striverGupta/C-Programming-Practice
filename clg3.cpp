//wap to find out the year is a leap or not:
#include <stdio.h>
#include <conio.h>
int main(){
   
   int n;
   printf("enter the year : ");
   scanf("%d",&n);
   if((n%4==0)&&(n%10!=0)||(n%400==0)){
   	printf("leap year");
   }
   else{
   	printf("not a leap year");
   }
	
	return 0;
}

