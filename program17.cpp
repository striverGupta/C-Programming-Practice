// write a program to print the following pattern(5):
//           1   
//        1 2 1
//       1 2 3 2 1
//      1 2 3 4 3 2 1
//	 1 2 3 4 5 4 3 2 1 
 
#include <stdio.h>
#include <conio.h>
#define N 5
int main()
{
	int i,j,k,l;
	for(i=1;i<=N;i++)
	{
		for (k=N;k>=i;k--)
		 printf( " ");
		for(j=1;j<=i;j++)
		 printf("%d",j);
		for(l=j-2;l>0;l--)
		 printf("%d", l);
		 printf("\n"); 
		
		
	}
	
	return 0;
	
	
}
