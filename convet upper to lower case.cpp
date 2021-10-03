#include <stdio.h>
#include <conio.h>
int main(){
	char ch[100];
	int i;
	printf("enter any character:");
	scanf("%C",&ch);
	
	for(i=0;ch[i]='\0';i++){
	    if(ch[i] >='a' && ch[i]<='z'){
	    ch[i]=ch[i]-32;
     }
  } 
	printf("lower into upper %c",ch);
	if(ch[i] >='a' && ch[i]<='z'){
	    ch[i]=ch[i]-32;
	}
	printf("upper into lower =%c",ch);
	return 0;
}
