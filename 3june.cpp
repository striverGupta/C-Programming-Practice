#include <stdio.h>
#include <conio.h>
int main(){
	
	int i,j,n;
 printf("enter the no.");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
 	for(int j=1;j<=n;j++){
	  if(j<=i){
	  	 printf("%d",j);
	  }else printf(" ");
  }for(int j=n;j>=1;j--){
  	if(j<=i){
  		printf("%d",j);
	  }else printf(" ");
  }
 		
    }
 
	
	
	return 0;
}
