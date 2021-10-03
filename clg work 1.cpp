#include <stdio.h>
#include <conio.h>
int main(){
	
	int num1 ,num2;
	float sum,sub,mult,divi,modu;
   printf("enter the values of numbers:");
   scanf("%d %d",&num1,&num2);
    
    sum=num1 +num2;
    sub = num1-num2;
    mult= num1*num2;
    divi= num1/num2;
    modu=num1%num2;
    
    printf(" sum of two numbers are %f \n",sum);
    printf(" sub of two numbers are %f \n",sub);
    printf(" mult of two numbers are %f \n",mult);
    printf(" divi of two numbers are %f \n",divi);
    printf(" divi of two numbers are %f \n",modu);
    
	return 0;
}
