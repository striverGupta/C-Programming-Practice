#include <stdio.h>
#include <conio.h>
int main(){
	
	int n,r,npr_var;
	printf("\ enter the value of n:");
	scanf("%d",&n);
	
	printf("\ enter the value of r:");
	scanf("%d",&r);
	
	npr_var= int fact ( int n ) / fact(n-r);
	printf("\n the value of p(%d,%d) is :%d",n,r,npr_var);
}
// function for calculating factorial 

int fact(int num)
{
	int k=1,i;
	// factorial of 0 is 1
   if (num==0){
   	return 0;
   }	
   else{
   	for (i=1; i <=num; i++)
   {
   	k=k*i;
   }
	
	return 0;
}
