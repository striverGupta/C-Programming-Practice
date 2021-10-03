 // reverse digits:
#include <stdio.h>
#include <conio.h>
int k,n;
int main()
{

	int a[7]={1,2,3,4,5,6,7};
    int k,n=7;
    int length=n;
     k=n/2;
     
    for(int i=0;i<length;i++){
    	printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<k;i++,n--)
   {
	
    int temp;
    temp = a[i];
    a[i] = a[n-1];
    a[n-1] = temp;
}
	for(int i=0;i<length;i++,n--){
	
	printf("%d ",a[i]);
}
	return 0;
}
