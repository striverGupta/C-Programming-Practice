#include <stdio.h>
#include <conio.h>
int prod(int x,int y){
	return(x*y);
}
main(){
	
	int x=2,y=3,z;
	z=prod(x,prod(x,y));
	printf("%d",z);
	return 0;
}
