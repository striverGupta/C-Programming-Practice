#include <stdio.h>
#include <conio.h>
#include <Math.h>
int main(){
	
	int a ,x ,n,t,r;
	printf("\n enter the values:");
	scanf("%d %d %d %d",&x,&r,&n,&t);
	
	a=(x*(1+r/n)^n*t);
	
	printf("\n the value of final amount :%d",a);
	return 0;
}
