#include <stdio.h>
int sum(int*,int* );
 int main (){
	
	int a=4,b=2;
	int *p,*q;
	
	p=&a,q=&b;
	 int res= sum(p,q);
	 printf("%d",res);
}
   int sum(int *x,int *y){
      return *x + *y;
  }
