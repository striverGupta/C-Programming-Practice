#include <stdio.h>
#include <conio.h>
int main(){
	
  char str[100]="madhu";
  char stri[100]="gupta";
  char st[100];
  int count =0, length =0,k,j;
  
  for(int i=0;i<5;i++){
	st[i]=str[i];
	count ++;
	}
	
	for(int i=5;i<0;i++){
		st[i]=str[i];	
   }
   
    for(j=count,k=0;j<10,k<6;j++,k++){
    	st[j]=stri[k];
		}
		
		for (int j=count;j<10,k<6;j++,k++){
		st[j]=stri[9-j];	
   }

	printf("the string is %s",st);
	return 0;
 }
