#include <stdio.h>
int main(){
	
	int num1,num2,num3;
	int*pnum1=&num1,*pnum2=&num2,*pnum3=&num3;
	
	printf("\n enter the first number :");
	scanf("%d",pnum1);
	printf("\n enter the second number :");
	scanf("%d",pnum2);
	printf("\n enter the third number :");
	scanf("%d",pnum3);
	
	if(*pnum1>*pnum2 && *pnum1>*pnum3)
		printf(" \n %d",*pnum1);
	
	if(*pnum2>*pnum1 && *pnum2>*pnum3)
		printf(" \n %d",*pnum2);
	
	else(*pnum3>*pnum1 && *pnum3>*pnum2);
	
		printf("%d",*pnum3);
	
    
	
	return 0;
}

