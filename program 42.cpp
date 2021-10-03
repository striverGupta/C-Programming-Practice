#include <conio.h>
#include <stdio.h>
void sum(int a,int b); // function declaration

int main()
{
	sum(2,3); //function call
	sum(3,6);
	sum(9,9);
	return 0;
}

//function definition
void sum(int a, int b){
	int sum;
	sum = a+b;
	printf("sum is equal to : %d \n",sum);
}

