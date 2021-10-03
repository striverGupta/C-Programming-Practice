#include <stdio.h>
#include <conio.h>
int main(){
	
	int num,reverse_num=0,remainder,temp;
	printf("enter an integer : ");
	scanf("%d",&num);
	
	temp=num;
	while(temp!=0)
	{
		remainder = temp%10;
		reverse_num=reverse_num*10+remainder;
		temp/=10;
	}
	if (reverse_num==num)
	printf("%d is a panlindrome number",num);
	else
	printf("%d is not a palindrome number",num);
	return 0;
}
