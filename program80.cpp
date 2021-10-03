//write a program to sum the series 1+1/2+1/3+.....+1/n.

#include <conio.h>
#include <stdio.h>
int main()
{
  int n;
  float sum=0.0,a;
  int();
  
  printf("\n Enter the value of n:");
  scanf("%d", &n);
  for (int i=1;i<=n;i++)
  {
  	a=1/i;
  	sum=sum+a;
  }
  printf("\n the sum of series 1/1+1/2+......+1/%d=%f",n,sum);
  return 0;
}
