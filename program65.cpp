#include <stdio.h>
#include <conio.h>

int main()
{
	int length,a[length],min,max;
	printf("\n enter the length of a array :");
	scanf("%d",&length);
	for(int i=0; i<length;i++){
	  	printf("\n enter a[%d] = ",i);
	  	scanf("%d",&a[i]);
  	}
 
    min =a[0];
    max = a[0];
	
	for(int i=0;i<length;i++){
		if(min>a[i])
		{
			min=a[i];
		}
		
		if(max<a[i])
		{
			max=a[i];
		}	
	}
	
	printf("min is =%d ",min);
	printf("max is =%d", max);
	return 0;
}
