//wap to find the reverse of a string:
# include <stdio.h>
#include <conio.h>
  int main(){
  	char s[1000], r[1000];
   int i, j, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   j = count - 1;

   for (i = 0; i < count; i++) {
      r[i] = s[j];
      j--;
   }

   r[i] = '\0';

   printf("%s\n", r);
  	return 0;
  }
