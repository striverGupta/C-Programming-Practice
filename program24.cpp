//Write a program to enter a number from 1 to 7 and display the 
//corresponding day of week using switch case statement.

 #include <conio.h>
 #include <stdio.h>
  
 int main()
 {
 	int day;
 	
 	printf("\n Enter any number from 1to7 :");
 	scanf("%d",&day);
 	switch(day)
 	
 	{
 	case'1': printf("\n Sunday");
	 break;
	 
	case'2': printf("\n Monday");
	 break;	
	 
	case'3': printf("\n Tuesday");
	 break;
	 
	case'4': printf("\n Wednesday");
	 break;
	 
	case'5': printf("\n Thrusday");
	 break;
	 
	case'6': printf("\n Friday");
	 break;	
	 
	case'7': printf("\n Saturday");
	 break;
	 
	Default: printf("invalid number");
	 }
 	return 0;
  } 
