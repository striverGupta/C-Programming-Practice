#include <stdio.h>
#include <conio.h>
void showArray(int a[10]);//show all element in array
void insertAt(int a[], int value, int indexAt);
void arraylength(int a[]);
//void delete(int a[],int value);
int length;
int main(){
int i;
	int a[10]={1,2,3,4,5,6,};
	showArray(a);
	arraylength(a);
	insertAt(a,32,2);
	showArray(a);
	return 0;	
} 
    for(int i=Index;i>= IndexAt;i--){
    	a[Index+1]= a[Index];
    	 Index--;
	}
	a[IndexAt]= value;
	
	for(int i=0;i<length;i++){
		printf("%d ",a[i]);
		
	}
//	for (int i=0;i<=Index;i++)


