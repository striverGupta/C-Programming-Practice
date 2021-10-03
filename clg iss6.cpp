//wap to calculate sum of digits of a number.
#include<stdio.h>
int main(){
	
	int a,b,sum=0;
	printf("Ankit Kumar\n ");
	printf("enter the numbers of a and b: ");
	scanf("%d %d",&a,&b);
	
	while(a<=b){
		sum= sum +a;
		a =a+1;
	}
	printf("\n sum =%d",sum);
	
	return 0;
}
