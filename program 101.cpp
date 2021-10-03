#include <stdio.h>
#include <conio.h>
int main(){
	int a[2][3]={1,2,3,4,5,6};
	int b[2][3]={2,3,4,5,6,7};
	int c[2][2]={0,0,0,0};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("multiplied array :\n");
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
