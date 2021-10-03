#include <stdio.h>
#include <conio.h>

int main()
{
  int length,a[length];
  
  printf("\n enter the legth of array:");
  scanf("%d",&length);
  
  for(int i=0; i<length;i++){
  	printf("\n enter a[%d] = ",i);
  	scanf("%d",&a[i]);
  	
  }
   	for(int i =0;i< length;i++){
   		printf("%d ",a[i]);
	   }
	
	return 0;
}
