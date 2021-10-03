#include <conio.h>
#include <stdio.h>
int main()
{

   char holiday='a';
   switch (holiday)
   { 
     case'a':
     case'A':
        printf("\n a");
     	printf("\n A");
     case'b':
	 case'B':
	   printf("\n b");
	   printf("\n B");
	   default:;	
   }
   return 0;	
   
}
