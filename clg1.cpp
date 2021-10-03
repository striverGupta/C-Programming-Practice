// wap to calculate squareroot of a number,only when 
// the number is greater than 2:
#include <stdio.h>
#include <Math.h>
int main(){
int a;float b;
printf("Ankit Kumar");
printf("\n number=");
scanf("%d",&a);
b=sqrt(a);
if(a>2)
{
	printf("square root is %.3f",b);
}else {
	printf("wrrong number");
}
return 0;
}
