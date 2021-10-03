 // write a program to sum the series 1/1!+1/2!+1/3!+....1/n!

#include <stdio.h>
#include <conio.h>


	int fact(int);
	main(){
           int n,f,i;
		   float result =0.0;
		   printf("\n enter the value of number :");
		   scanf("%d",&n);
		   for(i=1; i<=n; i++)
		   {
		   	f= fact(i);
		   	result +=1/(float)f;
		   	
			}
			printf("\n the sum of the series 1/1! + 1/2! +1/3!+.....=%f", result);
			return 0;	
	
	
	
}
int fact(int num)
{
	int f =1,i;
	for(i=num;i>=1;i--)
	f =f*i;
	return f;
}
