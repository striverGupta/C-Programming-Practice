#include<stdio.h>
#include<conio.h>
#include<Math.h>
int main(){
	
	float s,a,b,c,area;
	
	printf("\n enter the length of the three sides of teiangle :");
	scanf("%f %f %f",&a,&b,&c);
	s= (a + b + c)/2;
	//sqrt is a mathematical function defined in math.h header file:
	
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n area =%f",area);
	
	return 0;
}
