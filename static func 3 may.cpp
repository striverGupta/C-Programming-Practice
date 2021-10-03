#include <stdio.h>
#include <conio.h>
int a;
static int func()
{
	return a++;
	
}
  int main(){
  	a=10;
  	printf(" %d \n",func());
  	a*=10;
  	printf(" %d \n",func());
  	return 0;
  }
