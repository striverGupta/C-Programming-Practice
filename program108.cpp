#include <stdio.h>
#include <conio.h>
int main(){
	
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100-i;j++)
		{
			printf(" ");
			
		}
	
	for(int k=i;k >0 ;k--){
			  	printf(" * ");}
	printf("\n");
		
}
	return 0;
}
