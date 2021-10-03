// wap to find out greaterst of 3numbers using
// if else ladder:
#include <stdio.h>
#include <conio.h>
int main(){
	
	int a,b,c,big=0;
	printf(" \n enter the numbers :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c)
			printf("\n %d is a greater",a);
		else
			printf("\n %d is a greater",c);
	}
    else if(b>c)
		printf("\n %d is a greater ",b);
	else
	    printf("\n %d is a greater",c);
	
	return 0;
}
