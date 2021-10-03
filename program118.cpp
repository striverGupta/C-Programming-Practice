#include <stdio.h>
#include <conio.h>
int main(){
  	
 //int *p;
 //int *q;
 //int *r;
 
 int a=7;
 int b=8;
 int*p=&a;
 int*q=&b;
 //*p=*q;
 //int *c;
// int  *p=&b;
printf("%d",p+*q);
 printf("%d",*p);
 printf("%d",*q);
		
	return 0;
}


