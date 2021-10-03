#include <stdio.h>
#include <conio.h>
int main(){
	
  char str[100]="madhu";
  char stri[100]="gupta";
  char a[100];
  int count =0, length =0,k,j;
	for (int i=0;i<5;i++){
	a[i]=str[i];
	count ++;
  		
   }
    	for(j=count,k=0;j<10,k<6;j++,k++){
    	a[j]=stri[k];
			
		}

	printf("the string is %s",a);
	return 0;
}




