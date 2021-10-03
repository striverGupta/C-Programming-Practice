#include<stdio.h>
int fib(int);
 int main(){
	
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		printf("\n fib(%d)=%d",i,fib(i));
		return 0;
	}
	int fib(int num)
	{
		if(num<=2)
		return 1;
		return(fib(num-1)+fib(num-2));
	
    }
