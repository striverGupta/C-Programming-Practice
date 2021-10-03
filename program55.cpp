#include <stdio.h>
#include <conio.h>
int main(){
	
	int n=23;
    int isprime =1;
	
		
		for(int i =2; i*i< n; i++){
			
			if(n%i){
				isprime =0;
			}
		}
		 if ( isprime){
		 	printf("\n the number %d is prime,",n);
		 }
		 else{
		 	
		 	printf(" the number%d is not prime \n",n);
		 }
	
	return 0;
}
