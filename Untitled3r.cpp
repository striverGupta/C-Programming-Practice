#include <stdio.h.>
#include <conio.h>
int main(){
	char repeat;
	
	
	do{
		long fact =1;	
		int num= 1;
		printf(" enter the value of num:");
		scanf("%d",&num);
	
		for(int i=num;i>1;i--)
		{
		
		fact =fact*i;
		}
	printf("factorial =%d",fact);
	printf("\n do you want to continue then process y:");
	scanf("%c",&repeat);
	}while(repeat='y');
	
	return 0;
}
