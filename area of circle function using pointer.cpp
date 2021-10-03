#include <stdio.h>
#include <conio.h>
 
 void circle(float*r);
 void calculate_area (float*r,float*a);
 
 int main(){
 	
 	float radius,area;
 	calculate_area (&area,&radius);
 	printf("\n area of circle %f=%f",radius);
 	return 0;
 }
 void circle(float*r)
 {
 	printf("\n enter the radius:");
 	scanf("%f",r);
 	
 }
 void calculate_area (float*r,float*a)
 {
 	*a=3.14*(*r)*(*r);
 }
