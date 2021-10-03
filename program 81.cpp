#include <stdio.h>
#include <conio.h>
int main(){
	int i,j;
	int a[4]={1,2,3,4};
	int b[4]={5,6,7,8};
	int c[8],index =0;
	
	for (int i=0;i<4;i++){
		c[i]=a[i];
		index++;

	}
	for (int i=index, j =0 ;i<8, j<4;i++,j++){
		c[i]=b[j];
		
	 }
	  for(int i=0;i<8;i++){
	  	printf("%d",c[i]);
	  }
	return 0;
}
