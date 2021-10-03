#include <stdio.h>
#include <conio.h>

int main(){
	int count=1;
	for(int i=5;i>=1;i--){
	  	for(int j=i-1;j>0;j--){
	  		printf(" ");
		  }
		
		for(int k=count;k>=1;k--){
			printf("%d",k);
		}
		
		count++;
	  
	  printf(" \n");
	}
	return 0;
}
