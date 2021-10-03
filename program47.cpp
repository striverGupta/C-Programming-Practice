 //write a program to calculate sum of 
 //first n even number

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int i,n;
	int term,sum = 0;
	printf("\Enter the value of n:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if (i%2 == 0)
		{ term = pow(i,2);
		   sum += term;
			
		}
	}
	printf("\n 2^2 + 4^2 + 6^2 +........=%d",sum);
	return 0;
}
