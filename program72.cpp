#include <stdio.h>
#include <conio.h>
void showarray(int a[]);// shpw all element in array
int MAX =0;  //max or length we use,
int val=7;
int indexat=2;
int main(){
	int a[10]={1,2,3,4,5,6,7};
	
	
	//traversing
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}  
	showarray(a);
//	length of array

	for(int i=0;i<10;i++){
		if(a[i]!=0){
			MAX++;
		}
		printf("%d",a[i]);
	}
	int index =MAX-1;
	printf("MAX =%d\n Index =%d",MAX,index);
	
	//insertion at end of array
//	a[index+1]=val;
	
	for(int i=index;i>=indexat;i--){
		a[index+1]=a[index];
		index--;
	}
	a[indexat]=val;
	return 0;
}
