#include <conio.h>
#include <stdio.h>

int main(){
	
	int index =0;
	int x;
	printf("enter the length of first array :");
	scanf("%d",&x);
	int a[x];
	printf("\n enter the elements of firt array");
	for(int i=0;i<x;i++){
		printf("\n enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int y;
	printf("enter the length of second array :");
	scanf("%d",&y);
	int b[y];
	printf("\n enter the elements of second array");
	for(int i=0;i<y;i++){
		printf("\n enter the value of b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nfirst array : \n");
	for(int i=0;i<x;i++){
		printf("%d ",a[i]);
	}	
	printf("\nsecond array : \n");
	for (int i=0;i<y;i++){
		printf("%d ",b[i]);
	}
//	for(int i=0;i<;i++){
//	  	printf("%d",c[i]);
	return 0;	
}
