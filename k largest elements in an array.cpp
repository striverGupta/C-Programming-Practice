#include <stdio.h>
#include <conio.h>

		
    int main(){
    	int arr[100];
    	int a,k,n;
    	
    	printf("enter the value of n:");
    	scanf("%d",&n);
    	
    	printf("\n enter the elements of arr:\n");
    	
    	for(int i=0;i<n;i++)
        {
        	printf("enter element%d:\n",i+1);
        	scanf("%d",&arr[i]);
		}
		
		for(int i=0;i<n;i++)
		{
		for(int j=i+1;j<n;j++)
		  {
		  	if(arr[i]<arr[j])
		  	
		  	{
		  		a=arr[i];
		  		arr[i]=arr[j];
		  		arr[j]=a;
			  }
		  }
		  printf("%d",arr[i]);
		}
          printf("\n");
          printf("enter the value of k:");
          scanf("%d",&k);
          
          if(k<=n)
		  {
          	  for(int i=0;i<k;k--)
          	  {
          	  	printf("%d",arr[i]);
				}
		  }
		  
		  else
		  {
		  	printf("invalid value of k");
		  }
          
    	return 0;
  	}
