#include<stdio.h>
#include<conio.h>

 int main (){
	float radius,Area;
	printf("enter the radius of circle : \n ");
	scanf("%f",&radius);
    Area= 3.14*radius*radius;

	printf("the area of circle:%f0.4%f\n",Area);
    getch();
	return 0;
}
