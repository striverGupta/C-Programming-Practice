#include <stdio.h>
//void func(int);
 static int add(int val)
 {
 	static int sum;
 	sum+=val;
 	return sum;
 }
int main (){
	
	int i,n=10;
	for (i=1;i<=n;i++){	
	add(i);
}
	printf("\n SUM=%d",add(0));
	return 0;
}
