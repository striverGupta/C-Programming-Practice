
#include <stdio.h>
int reverse;
int main(){
	
    int x = 123;
    printf("reverse of no is:%d",reverse( x));
    return 0;
}
    int reverse(int x){
  int rev=0;
    while(x>0){
        rev= rev*10+x%10;
        x=x%10;
    }
    return rev;
}
