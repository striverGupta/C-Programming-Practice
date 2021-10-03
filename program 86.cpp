#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,n;
	float median, values[10];
	printf("\n enter the size of the array :");
	scanf("%d",&n);
	printf("\n enter the values:");
	for(i=0; i<n ;i++)
	    scanf("%f",&values[i]);
	if(n%2 ==0) 
	   median = (values[n/2]+ values[n/2+1])/2.0;
	else
	   median = values[n/2+1];
	 printf("\n median =%f",median);
	 return 0;    
}
