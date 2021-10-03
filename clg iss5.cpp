// wap to print the  table of any numbers:

#include<stdio.h>
int main(){
	int i,n;
	printf("Ankit Kumar \n ");
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("table of %d",n);
	printf("\n");
	for(i=0;i<=10;i++){
		printf("\n %d * %d =%d",n,i,(n*i));
	}
	
	return 0;
}

 
