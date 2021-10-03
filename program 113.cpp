#include <stdio.h>
#include <conio.h>
int main(){
	
	char str[100],i=0,length;
	printf( "enter the string :");
    scanf("%s",str);
	while(str[i]!='\0')
	i++;
	length=i;
	printf("length of string is %d",length);
	
	return 0;
}
