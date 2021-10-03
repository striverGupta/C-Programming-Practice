#include<stdio.h>
#include<conio.h>
#include<Math.h>
int main(){
	int x1,x2,y1,y2;
	float distance;
	printf("\n enter the x and y in first point: ");
	scanf("%d %d",&x1,&y1);
	printf("\n enter the x and y in second point: ");
	scanf("%d %d",&x2,&y2);
//	distance=sqrt(pow ((x2-x1),2)+pow((y2-y1),2));
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\n distance =%f",distance);
	return 0;
}
