#include <stdio.h>
int main(){
	
	int *a[5];
	for(int i=0;i<5;i++){
		printf("enter the value ofa[%d]",i);
		scanf("%d",a[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d \n",*a[i]);
		
	}
	
	return 0;
}
