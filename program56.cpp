#include <stdio.h>
#include <conio.h>
int main(){
	int x,y,z,sum,avg,ball,max,min;
	printf( " enter the value of number \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n enter 1 the total  numbers \n enter 2 for average \nenter 3 for max \nenter 4 for min \n ");
	scanf("%d",&ball);
	
	switch(ball)
	{
		
		
		case 1 :{
			sum =x+y+z;
		printf("\n sum of three number:%d \n",sum);
	
		break;}
	
		
		  case 2:{
			 avg =x+y+z/3;
		printf("\n avg of three number:%d \n" ,avg);
	
		break;}
	
	 
	 
	 case 3:
		
	 {
	 max = x>y?(x>z?x:z):(y>z?y:z);
	 printf("  max of three number :%d \n",max);
	
		break;}
		
	
	
	case 4: {
		min = x<y?(x<z?x:z):(y<z?y:z);
	printf("%d",min);
	break;}
	
		case 5: {
		
	printf("default");
	break;}
	
	
	
	
	
    }
    
    
    
    
	return 0;
}
