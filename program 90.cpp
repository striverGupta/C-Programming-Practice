#include <stdio.h>
#include <conio.h>
int main(){
	
	for(int i=1;i<6;i++){
	  	for(int j=1;j<=5-i;j++){
	  		printf(" ");
		}
		for(int k=1;k<=1;k--){
			printf("%d",k);
		}  
	  
	  printf(" \n");
	}
	return 0;
}
