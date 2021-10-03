#include <stdio.h>
int main(){
	
	char ch[5];
	char *p=ch;
	char *c= ch;
	char *e=ch;
	
	
	for(int i=0;i<5;i++){
	 
	 scanf("%c",p);
	 p++;
	}
	
	
	for(int i=0;i<5;i++){
		if(*e=='0'){
			*e ='5';
		}
		e++;
	}

	for(int i=0;i<5;i++){
	
	printf("%c",*c);
	c++;
	}
	
	return 0;
}
