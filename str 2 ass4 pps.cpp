// write a prgm to enter the name and
// calculate its length:
#include <stdio.h>
#include <conio.h>
int main(){
	 char str[1000];
	 int i;
	 printf("Madhu gupta ");
	printf("enter the string :");
	scanf("%s",&str);
	for (i=0; str[i]!='\0'; ++i);
	
	printf("length of str is  %d",i);
	
	return 0;
}
