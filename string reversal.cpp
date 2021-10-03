#include <stdio.h>
#include <conio.h>
 int main(){
	char s[100],r[100];
	int i,j,count=0;
	printf("input  a string :\n");
	gets(s);
	while(s[count]!='\0')
	count++;
	j= count-1;
	for(i=0;i<count;i++){
		r[i]=s[j];
		j--;
	}
	r[i]='\0';
	printf(" reverse string : %s \n",r);
	return 0;
}
