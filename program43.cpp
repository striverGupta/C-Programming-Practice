//recursion

#include <conio.h>
#include <stdio.h>
void madhu(int a,int sum);

int main(){
	int sum=0;
	madhu(4,sum);
	return 0;
}

void madhu(int a,int sum){
	sum= sum + a;
	a--;
	if(a>0){
		madhu(a,sum);
	}
	printf("sum : %d \n",sum);
}
