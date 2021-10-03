#include<stdio.h>
#include<conio.h>
 void showArray(int a[]);

 int main(){
	int val=8;
  	int IndexAt =2;
  	int Index=6;
 	int  length=7;
  	int a[10]={1,2,3,4,5,6,7};

    for(int i=Index;i>= Index;i--){
    	a[Index+1]= a[Index];
    	 Index--;
	}
	a[IndexAt]= val;
	
	for(int i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
