#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,n,arr[20],large=-1111,second=-1234,third=-2345;
	
	printf("enter the number elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the number :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]>large)
		large=arr[i];
	}
	for(i=0;i<n;i++){
		if (arr[i]!=large)
		{
			if(arr[i]>second)
			second=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if (arr[i]!= second){
			if(arr[i]>third)
			third=arr[i];
		}
	}
	printf("\n The number  entered are:");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n the largest of these numbers is :%d",large);
	printf("\n the second largest of these number is :%d",second);
	printf("\n the third  largest of these number is :%d",third);
	
	return 0;
}
