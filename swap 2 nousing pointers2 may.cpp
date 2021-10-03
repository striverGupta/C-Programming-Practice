#include <stdio.h>
#include <conio.h>

int main(){
	
	int x,y,*a,*b,temp;
	
	printf("\ n enter the number of x and y \n:");
	scanf("%d %d",&x,&y);
	
	printf("before swapping\n x=%d \n y=%d \n",x,y);
	a = &x;
	b = &y;
	
	temp=*b;
	*b=*a;
	*a=temp;
	
	printf("after swapping\n x=%d \n y=%d \n",x,y);
	
	return 0;
}
