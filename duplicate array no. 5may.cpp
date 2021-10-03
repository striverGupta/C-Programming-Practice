#include <stdio.h>
#include <conio.h>
int main(){
	int array[20],i,n,j;
	printf("\n enter the size of the array :");
	scanf("%d",&n);
	printf("enter any %d elements in array :",n);
	for(i=0;i<n;i++){
		scanf("%d",& array[i]);
	}
	printf("duplicate elements are:");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]==array[i] ){
				
				printf("\n %d ",array[i]);
				
			}
		}
	}
	
	return 0;
}
