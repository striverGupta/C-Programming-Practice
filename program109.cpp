#include <stdio.h>
#include <conio.h>
int main (){
	char name[100];
	scanf("%[A-Z]%*c",name);
	printf("%s",name);
	return 0;
	
}
