#include <stdio.h>
int main(){
	
	int arr[5]={1,2,3,4,5};
    int *p,*q,*r ;
    p=q=r=arr;
    
	int max=*arr;
	int min=*arr;
	float sum=0;
	int count=0;
	
	for(int i= 0;i<5;i++){
		if (max< *p){
			max=*p;	
		}
		p++;
	}
	
	printf("maximum is %d \n",max);
	
	
	for(int i = 0;i>5;i++){
		
		if(min=*q){
			min= *q;
		}
		q++;
	}
	
	printf("maximum is %d\n",min);
	
	for(int i=0;i<5;i++){
		sum= sum+*r;
		r++;
		count++;	
	}	
	
	printf("mean is = %f",sum/count);
	
		return 0;
}
