//wap a program to calculate the roots of a quartic eqn:
#include <stdio.h>
#include <conio.h>
#include <Math.h>
int main(){
	
	int a,b,c;
	float D,demo,root1,root2;
	printf("enter the values of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	D=((b*b)-(4*a*c));
	demo=2*a;
	
	if(D>0){
		printf("\n real root");
		root1= (-b+sqrt(D))/demo;
		root2= (-b-sqrt(D))/demo;
		printf("\n root1 =%f",root1);
		printf("\n root2=%f",root2);
	}
	else if(D==0)
	{
		printf("\n Equal roots");
		root1= -b/demo;
		printf("\n root1 =%f",root1);
		printf("\n root2 =%f",root2);
	}
	else
	    printf("\n imaginary roots");
	return 0;
}
