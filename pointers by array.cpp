#include <stdio.h>
int main(){


  int *a[5];
  int m=3,b=4,c=6,d=1,e=7;
  a[0]=&m;
  a[1]=&b;
  a[2]=&c;
  a[3]=&d;
  a[4]=&e;

     for(int i=0;i<5;i++){
     	printf("%d \n" ,*a[i]);
	 }
    return 0;
}
