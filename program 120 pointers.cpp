#include <stdio.h>
#include <conio.h>
int main(){
	
	char ch[100]="Madhu";
	for (int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("%c ",ch[j]);
		}
		printf("\n");
	}	
	return 0;
}
