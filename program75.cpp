#include <stdio.h>
#include <conio.h>
void showArray(int a[]);// show all element in array
void insertat(int a[],int value,int indexAt);//inseration at index
void arraylength(int a[]);
int index=0;
int length=0;  //max or length we use,
int val=9;
int indexAt=4;
int main(){
	int a[10]={1,2,3,4,5,6,7};
	
	showArray(a);
	
//	length of array

	for(int i=0;i<10;i++){
		if(a[i]!=0){
			length++;
		}
	}
	int index =length-1;
	printf("length =%d\n Index =%d \n",length,index);
	
	//insertion at end of array
//	a[index+1]=val;
	
	
	for(int i=index;i>=indexAt;i--){
		a[index+1]=a[index];
		index--;
	}
	a[indexAt]=val;
	
	showArray(a);
	
	return 0;
}

void showArray(int a[]){
	//traversing
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}  
		printf("\n");
}
//void insertat(  int a[],int value,int indexAt);
//	for(int i=index;i>=indexAt;i--){
//		a[index+1]=a[index];
//		index--;
//	}
//	a[indexAt]=val;
//	
//	showArray(a);
//     


