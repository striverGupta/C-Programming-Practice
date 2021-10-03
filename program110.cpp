#include <stdio.h>
#include <stdio.h>
	
	void inputs(char arr[],int n);
	int main(){
		char name[100];
		inputs (name,10);
		printf("%s",name);
		
		return 0;
	}
	void inputs(char arr[],int n){
		char ch;
		int i=0;
		while((ch=getchar())!='\n'){
			if(i<n){
				arr[i]=ch;
				i++;
			}
			arr[i]='\0';
	    }
   } 

