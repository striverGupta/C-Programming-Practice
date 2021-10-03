#include <stdio.h>
#include <conio.h>
int main(){
	
	int i,n,arr[20],sum=0;
	float mean=0.0;
	
	printf("enter the number of elements \n :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	sum+= arr[i];
	mean=sum/n;

    printf("\n the sum of the array elements =%d",sum);
    printf("\n the mean of the array elements =%f",mean);
	
	return 0;
}
