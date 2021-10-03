#include <stdio.h>
#include <conio.h>
void deleteValue(int a[],int val);
void insertAt(int a[], int value, int indexAt);
void showArray(int a[]);
void arraylength(int a[]);
int length;
int deleteIndex;
int indexAt;
int index;
int main(){
	int a[10]={1,2,3,4,5,6};
	arraylength(a);
	showArray(a);
	deleteValue(a,4);
	showArray(a);
	index;
    return 0;	
}
// insert at
void insertAt(int a[], int value, int indexAt){
	 for(int i= index;i>= indexAt;i--){
    	a[index+1]= a[index];
    	 index--;
	}
	a[indexAt]= value;
	
	for(int i=0;i<length;i++){
		printf("%d ",a[i]);
	
	
}

  
//delete at
void deleteValue(int a[], int value){
	for(int i=0;i<length;i++){
		if(a[i]==value){
			deleteIndex=i;
		}
	}s
	
	for(int i= deleteIndex;i<length;i++){
		a[i]=a[i+1];
	}
	
	a[length]=0;
}

//show the array
void showArray(int a[]){
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");
	printf("\n");
}

//return arra length
void arraylength(int a[]){
	for(int i=0;i<=10;i++){
		if(a[i]!=0){
			length++;
		}
	}
}
