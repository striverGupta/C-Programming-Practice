  //using if else if;;; find the greatest of three number

#include <stdio.h>
#include <conio.h>
int main(){
	
	int a,b,c,big=0;
 
 printf("\ enter the number:");
 scanf("%d",&a);
 printf("\ enter the number:");
 scanf("%d",&b);
 printf("\ enter the number:");
 scanf("%d",&c);
  if (a>b){
  	if(a>c)
	  
  	 printf("\n %d is greater than %d and %d",a,b,c);
  	 
  	 else 	   
  	 printf("\n %d is greater than %d and %d",c,a,b ); 
  }
  else
  
 	if(b>c)
 		printf("\n  %d is greater than %d and %d",b,a,c);
 		
 	else	 
	printf ("\n %d is greater than %d and %d",c,a,b);	
	return 0;
}
