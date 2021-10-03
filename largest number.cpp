#include <stdio.h>
#include <conio.h>

int main(){
	
	int x,a[x];
	int k;
	int temp;
	printf("enter the number of elements :");
	
	scanf("%d",&x);
	for (int i=0;i<x;i++){
		printf("the enter the element a[%d],i");
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<x;i++){
		for (int j=i+1; j<x; j++){
			if (a[i]<a[j]){
				temp=a[i];
				a[j]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n enter the no.of largest value to print:");
	scanf("%d",&k);
	if(k<=x){
		printf("\n the largest number are :");
		for (int i=0;i<k;i++){
			printf("%d",a[i]);
			
		}
	}else{
		printf(" \n invalid value of k");
		
	}
return 0;	
}
