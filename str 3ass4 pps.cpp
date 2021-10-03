// WAP to demonstrate string predefined functions:
#include<stdio.h>
#include <string.h>
int main(){
	
	char str1[]="Hello World";
	char str2[]="Hello Madhu gupta";
	char str3[30];
	char str4[30];
	char str5[]="madhu";
	
	strcpy(str2,str1);
	strcpy(str3,"copy successful");
	strcpy(str4,str5);
	printf("str2:%s \n str3:%s \n str4:%s \n",str2,str3,str4);
     	
	return 0;
}
