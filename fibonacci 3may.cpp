#include <stdio.h>
#include <conio.h>
// Fibonacci Series using Recursion  // 1st method

//int fib(int n)
//{
//    if (n <= 1)
//        return n;
//    return fib(n - 1) + fib(n - 2);
//}
//  
//int main()
//{
//    int n = 9;
//    printf("%d", fib(n));
//    getchar();
//    return 0;
//}
// direct output
// 2nd method

int main(){
	
	int n,a=0,b=1,c;
	printf("enter limit :");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++){
	
	printf("%d \n",a);
	
	c=a+b;
	a=b;
	b=c;
	}
	
	return 0;
}
