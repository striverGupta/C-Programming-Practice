#include <stdio.h>
#include <conio.h>
int main(){
	
	int i,n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n ----------------------------------------------");
	i=1;
	do{
		printf("\n | \t %d \t | \t %d \t | \t %d \t |",i,i*i,i*i*i);
		
		i++;
	}while(i<n);
	
	printf("\n------------------------------------------------");
	
	return 0;
}
