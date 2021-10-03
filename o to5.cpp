#include <stdio.h>
int main(){
	
	int x,a[x];
	printf("enter  the length of input:");
	scanf("%d",&x);
	printf("enter the value of input:");
	 for(int i=0;i<x;i++){
	 	printf("\n enter the inputs a[i]:");
	 	scanf("%d",&a[i]);
	 	 }
	 	 
	 	 for(int i=0;i<x;i++){
	 	 	if(a[i]==0){
			  
	 	 	a[i]=5;
		  }
	}
	for(int i=0;i<x;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}
