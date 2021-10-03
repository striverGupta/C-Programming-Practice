#include <stdio.h>
#include <conio.h>
 int main(){
 int i,j,rows;
 printf("enter the square with daigonals row = ");
 scanf("%d",&rows);
 printf("hollow square star pattern with diagonal \n");
 for (i=1;i<= rows;i++){
 	for (j=1;j<= rows;j++){
 		if(i==1|| i== rows|| i==j || j==1|| j== rows || j== rows -i +1){
 			printf("*");
		 }
		 else 
		 {
		 	printf(" ");
		 }
	 }
 printf("\n");
}
return 0;	
}   
