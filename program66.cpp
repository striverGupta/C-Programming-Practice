#include <stdio.h>
#include <conio.h>
int main()
{
	int x,y,temp;	
	printf (" enter the value of  x =");
	scanf("%d ",&x);
	printf ("\n enter the value of  y =");
	scanf("%d ",&y);
  temp =x;
	x =y;
	y = temp;
	printf("\n after swapping: %d %d" ,x,y,temp);

	return 0;
}
