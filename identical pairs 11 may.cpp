// the solutions should be written , for compiler compatibitly : 

#include <stdio.h>
#include <Math.h>


int maxDistance(int arr[], int n)
{
	int size= n;
	int maxD= -1;
	for(int i=0;i<n -1;i++)
	for(int j=i+1;j<n;j++)
	if(arr[i]==arr[j])
	{
		int temp= abs(j-i-1);
		maxD = maxD>temp?maxD:temp;
	}
	return maxD;
}
   int main (){
   	 
   	 int arr[]={5,1,3,1,6,3};
   	 printf("maximum distance between this array:%d",maxDistance(arr,10));
   	 return 0;
   }
