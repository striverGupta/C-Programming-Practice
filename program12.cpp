#include <conio.h>
#include <stdio.h>

int main()
{
	for(int i=1;i<=100;i++)
	{	
		if((i*2)%(i*2-1)==0){
			printf("%d/%d, ",i*2,i*2-1);
		}
		
	}
	return 0;
	
}
