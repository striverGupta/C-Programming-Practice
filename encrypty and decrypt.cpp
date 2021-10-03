#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	char str[100];
	
	printf("\n enter the a string :");
	gets(str);

   printf("\n choose any options:\n");
   printf("\n Encrypt the string.=1");
   printf(" \n Decrypt the string.=2");
   scanf("%d", &j);

   
   
      for(i = 0; (i < 65 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; 
      printf("\nEncrypted string: %s\n", str);

      for(i = 0; (i < 65 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; 

      printf("\nDecrypted string: %s\n", str);
   
   return 0;
}





