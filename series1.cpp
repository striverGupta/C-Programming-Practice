#include <stdio.h>
#include <conio.h>
#include <Math.h>
//int main(){
//	
//	int n;
//	float sum =0.0,a,i;
//	printf("\n enter the limits n :");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		
//		a=1/pow(i,i);
//		sum =sum+a;
//	}
//	printf(" \n  the sum of series 1/1+ 1/4+ 1/9+ ..........+ 1/n^2 : %f",sum);
//	return 0;
//}


  int main(){
  	
  	int i,num,n;
  	float a,sum=0.0;
  	
  	printf("\n enter the limits:");
  	scanf("%d",&n);
  	
  	for(i=1;i<=n;i++){
  		
  		num= pow(i,i);
  		sum += (float)num /i;
	  }
  	printf("\n the sum of series 1/1 + 4/2+ 9/3+......=%f",sum);
  	return 0;
  }


