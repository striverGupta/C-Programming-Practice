#include <stdio.h>
void sum(int a[]);
int main(){
	int a[5]={1,2,3,4,5};
	
	sum(a);
	
	return 0;
}
  void sum (int a[]){
  	int*p;
  	p=a;
  	int sum=0;
  	for (int i=0;i<5;i++){
  		sum =sum+*p++;
	  }
  	printf("%d \n",sum);
  }
