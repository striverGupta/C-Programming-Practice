#include <stdio.h>
#include <conio.h>


int main(){

 float radius ,area=0.0;
	float *pradius= &radius,*parea= &area;
	 printf("\n enter the radius of circle :");
	 scanf("%f",parea);
	 
	 *parea=3.14*(radius)*(radius);
	 
	 printf("\n the area of the circle with radius %f=%f",radius,area);
	 return 0;	
}
