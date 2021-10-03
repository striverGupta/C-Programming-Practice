#include <stdio.h>
#include <conio.h>
int main(){
	
	int i,j,n,k;
	printf("\n enter the numbers :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				printf("%d",j);	
			}
			else{
			} 	printf(" ");
	}
	 printf("\n");
   }
	return 0;
 }
