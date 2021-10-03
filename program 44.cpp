//  a is less than b(calling a function):

#include <conio.h>
#include <stdio.h>

int check_relation(int a, int b);//function declaration
int main(){
	
	int a=3,b=5,res;
	res= check_relation(a,b);//function call
	if (res==0)// test the returned value
	printf("\n equal");
	if (res==1)
	printf("\n a is greater than b");
	if (res==-1)
	printf("\n a is less than b");
	return 0;
}
 int check_relation(int a,int b)// function definition
  {
  	if (a==b)
  	return 0;
  	if(a>b)
  	return 1;
  	else if (a<b)
  	return -1;
  }
