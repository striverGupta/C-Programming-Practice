#include <stdio.h>
#include <conio.h>
int main(){
	
	for (int i=1;i<6;i++){
		for (int j=5; j>0;j--){
			printf(" ");
		}
		for(int k=i;k>0;k--){
			printf("%d",k);
		}
		printf("\n");
	}
	
 return 0;	
}
