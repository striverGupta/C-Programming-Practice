// Write a program to determine whether an enterd character  is a
// vowel or not:

#include <conio.h>
#include <stdio.h>

int main()
{
	char ch;
	printf("\n Enter any character:");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		printf("\n %c is a vowel", ch);
		break;
		
		case 'e':
		printf("\n %c is a vowel", ch);
		break;
		
		case 'i':
		printf("\n %c is a vowel", ch);
		break;
		
		case 'o':
		printf("\n %c is a vowel", ch);
		break;
		
		case 'u':
		printf("\n %c is a vowel", ch);
		break;
		
		default: 
		printf("%c is not a vowel",ch);
		}
	return 0;	
}
