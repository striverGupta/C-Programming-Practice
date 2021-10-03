#include <stdio.h>
int sum (int ,int);
	
int (*sump)(int, int);
	


int main(){
	
	int a =5;
	int b=4;
	
	sump=sum;
	int res=sump(a,b);
	printf("%d",res);

	return 0;
}
	
	int sum(int a,int b){
		return a+b;
	}
