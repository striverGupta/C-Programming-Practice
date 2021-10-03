// wap to find out weather the person is eligible for
// voting or not:
#include <stdio.h>
#include <conio.h>
int main(){
	int n;
	printf("enter the age: ");
	scanf("%d",&n);
	if(n>=18){
		printf("eligible for voting");
	}else{
		printf("not eligible for voting");
	}
	return 0;
}
