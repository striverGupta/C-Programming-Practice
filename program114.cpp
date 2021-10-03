#include <stdio.h>
int main(){
	
	char str[100]={'m','a','d','h','u'},stri[100];
	for (int i=0;i<5;i++){
		stri[i]=str[4-i];
		
	}
	printf("the string is  %s",stri);
	
	
	return 0;
}
