//wap to calculate sum and average of first 5 numbers:
#include <stdio.h>
int main(){
	int i=0,sum=0,aver=0;
	while(i<=5){
		sum=sum+i;
		i=i+1;
		aver= sum/5;
	}
	printf (" Ankit Kumar\n");
	printf(" \n sum =%d",sum);
	printf("\n average =%d",aver);
	return 0;
}



