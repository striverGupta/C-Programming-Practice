#include <stdio.h>
#include <conio.h>
int main(){
	
	int mahi = 0,i,num;
	printf("\n enter any number :");
	scanf("%d",&num);
	for(i =2; i<num; i ++)
	{
		if(num%i==0)
		{
			mahi=1;
			break;
		}
	}
	if (mahi ==1)
	printf("\n %d is a composite number",num);
	else
	printf("\n %d is a prime number",num);
	return 0;
}
