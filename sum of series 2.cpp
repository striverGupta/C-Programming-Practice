#include <stdio.h>
#include <conio.h>
int main(){
	
	int n;
	float sum =0.0,a,i;
	
	printf("enter the value of n:");
		scanf("%d",&n);
		
	for(i=1.0;i<=n;i++){
		
		a=1/i;
		sum=sum + a;
	}	
	printf("\n the sum of series  1/1 + 1/2 +......+ 1/%d = %f",n,sum);
	
	return 0;
}
