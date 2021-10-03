#include <conio.h>
#include <stdio.h>

int main()

{
	int n,m, sum = 0;
	printf("\n Enter the value of m :");
	scanf("%d",&m);
	
	printf("\n Enter the value of n :");
	scanf("%d",&n);
	
	if(m<n){
		while(m<=n)
			{
				sum =sum+m;
				m=m+1;
			}
		printf("\n sum =%d",sum);
	}
		else{
			printf("first num should be smaller");
		}
	
		
		return 0;
	
}
