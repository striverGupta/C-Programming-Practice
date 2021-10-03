#include <stdio.h>
#include <conio.h>
int main(){
	
	int arr[]={1,2,3,4,5,6,7};
	int n;
	 int temp =arr[0];
	 for(int i=0;i<n-1;i++)
	 arr[1]=arr[i+1];
	 arr[n-1]=temp;
	  printf("%d");
	
	return 0;
}
