#include<stdio.h>  
  
void natural(int);  
  
int main()  
{  
    int n;  
  
    printf("Enter the number \n");  
    scanf("%d", &n);  
  
    printf("\nNatural Numbers from 1 To %d are:", n);  
    natural(n);  
  
    return 0;  
}  
  
void natural(int num)  
{  
    if(num)  
       natural (num-1);  
    else  
        return;  
  
    printf("\n%d\n", num);  
}  
