#include <conio.h>
#include <stdio.h>
int main()
{
	int n;
	printf("\n Enter the value of any number:");
	scanf("%d",&n);
	if(n>0){
      	    printf("%d is a positive number",n);
      	   }
	else if(n<0)
			   {
			   	printf("%d is a negative number",n);
			   }	  	
	else
        {
        	printf("n is a zero");
		}	
	return 0;
}
