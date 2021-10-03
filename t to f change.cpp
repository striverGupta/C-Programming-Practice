#include <stdio.h>
int main(){
	
	char ch[5];
	char *p=ch;
	
	
	
	for(int i=0;i<5;i++){
	 scanf("%c",p);
	 p++;
	}
	

	for(int i=0;i<5;i++){
	printf("%c",*p);
	p++;
	}
	
	return 0;
}
