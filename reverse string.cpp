#include <stdio.h>
#include <conio.h>
int main(){
	
	int i,j,k,count=1,n;
	
	printf("enter the number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=i-1;j>0;j--){
			printf(" ");
		}
	}
	for(k=count;k>=1;k--){
		printf("%d",k);
	}
	count++;
	printf("\n");

 return 0;
}
