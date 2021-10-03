// wap that read the marks and assign grades as given as
// below:1.>90 Grade S 2.>=80 and<90 Grade A 3.>=70and<80
// grade B 4.>=60and < 70 grade C 5.>=50and<60GradeD 6.<50
// is fail:

#include <stdio.h>
int main(){
	int score;
	 
   printf("Enter score( 0-100 ): ");
   scanf("%d",&score);
// using nested if-else statements.
   if(score>=90 && score<=100)
     printf("Grade: s");

   else if(score>=80)
     printf("Grade: A");

   else if(score>=70)
     printf("Grade: B");

   else if(score>=60)
     printf("Grade: C");

   else if(score>=50)
     printf("Grade: D");

   else
     printf("Grade: F");
	
	
	return 0;
}
