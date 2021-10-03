#include <stdio.h>
#include <conio.h>
#include <Math.h>
int main(){
	
	int num,sum=0,r,n;
	printf("\n enter the number :");
	scanf("%d",&num);
	n=num;
	
	while(n>0){
		r = n%10 ;
		sum += pow(r,3);
		n=n/10;
	}
	if (sum == num)
	printf("the number is asmstrong number ",num);
	
	else
	printf("the number is not an asmstrong number ",num);
	
	return 0;
}
