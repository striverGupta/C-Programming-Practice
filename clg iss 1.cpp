//wap to print 10 natural numbers using a) foor loop
// b) while loop c) do while  loop

// while loop
//#include<stdio.h>
//int main() {
//int i = 1;
//while (i <= 10) {
//printf("\n %d", i);
//i++;
//}
//return (0);
//}
//
////for loop
//#include <stdio.h>
//int main(){
//	
//	int n,i;
//	printf("enter the number:");
//	scanf("%d",&n);
//	printf("Printing Numbers form 1 to %d\n",n);  
//	for(i = 1; i <= n; i++) {  
//        printf("%d \n", i);  
//    }
//     
//	return 0;
//}
// do while loop
#include <stdio.h>
int main(){
	
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	printf("Printing Numbers form 1 to %d\n", n);  

    i = 1;
    do {  
        printf("%d \n", i);  
        i++;
    } while(i <= n);
     
    return 0;  
} 


