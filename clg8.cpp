// wap to print the day of the weeks deepending on the
// value of an integer variable day .Assume that day 1 
// is sunday:
# include <stdio.h>
#include <conio.h>
int main(){
	
	int week;
	printf("enter the week number(1-7): ");
	scanf("%u",&week);
	
	switch(week){
	case 1:
			printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("\n Please enter Valid Number between 1 to 7");
	}
	return 0;
}
