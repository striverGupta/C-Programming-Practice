#include <stdio.h>
#include <conio.h>

int main(){
	
	char s[1000], *p; 
	int vowels=0,consonants=0;
	
	printf("enter the string :");
	gets(s);
	
	p=s;
	
	while (*p)
	{
		if( (*p>=65 && *p<=90) || (*p>=97 && *p <=122))
		
		{
			if (*p=='a'|| *p=='e'||*p=='i'||*p=='o'|| *p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
			 vowels++;
			 else
			 consonants++;
		}
		p++;
	}
	
	printf("vowels= %d\n ",vowels);
	printf("consonants =%d\n",consonants);

	return 0;
	
}
