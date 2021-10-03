// wap that display the details of students:
#include<stdio.h>
typedef struct Student
{
int rno;
char name[30];
float perc;
};

int main()
 {
  struct Student s;
  printf("\n Enter Roll Number : ");
  scanf("%d",&s.rno);
  printf("\n Enter Student name : ");
  scanf("%s",s.name);
  printf("\nEnter Percentage : ");
  scanf("%f",&s.perc);
  printf("\n\n Details of Student are :\n");
  printf("\n Roll Number is : %d",s.rno);
  printf("\n Name is : %s",s.name);
  printf("\n Percentage : %f",s.perc);
  return 0;
}

