#include <stdio.h>
#include <conio.h>
int main(){
	int a,b;
	int andop,orop,xorop,notop,ls,rs;
	
	printf("enter the two no:");
	scanf("%d %d",&a,&b);
	
	andop=a&b;
	orop= a|b;
	xorop=a^b;
	notop=~a;
	ls=a<<b;
	rs=a>>b;
	printf(" \n And operators :%d",andop);
	printf(" \n or operators :%d",orop);
	printf(" \n bitwise operators :%d",xorop);
	printf(" \n not operators :%d",notop);
	printf(" \n  left shift: %d",ls);
	printf(" \n  right shift :%d",rs);
  return 0;
} 
