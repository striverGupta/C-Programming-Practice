#include <stdio.h>
#include <conio.h>
int main(){
	
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i<=j){
				}else{
					a[i][j]=0;
				}
			}
		}
    
	printf("upper triangle  matrix:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i>=j){
				
				}else{
					b[i][j]=0;
				}
		}
	}
    

	printf("lower triangle  matrix:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
	return 0;
}
