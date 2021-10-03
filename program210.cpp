#include <stdio.h>
int main(){
	
	int a[5];
	int*p,*q;
	p=&a[0];
	q=&a[4];
	
	while(p<=q){
		scanf("%d",p);
	//	printf("%d",*p);
		p++;
			}
	
	return 0;
}
