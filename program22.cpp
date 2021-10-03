#include <conio.h>
#include <stdio.h>
int main()
{
	char input;
	printf("\n Enter the value of numbers:");
	scanf("%c",&input);
	
	switch(input){
	case 'a':{
             printf("Outstanding");
			 break;		
			}
	case 'b':{
		      printf(" good");
		      break;
             }
    case 'c':{
    	      printf(" fair");
		      break;
           	}      
	case 'd':{
		      printf("fail");
		      break;
	          }
	default: {
		printf(" valid grade");
		break;
			}
	}
	
	return 0;
}
	

		
