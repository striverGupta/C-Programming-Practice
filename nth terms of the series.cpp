#include <stdio.h>
#include <conio.h>
#include <math.h>

//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int i ,arr[20];
  arr[1]=a;
  arr[2]=b;
  arr[3]=c;
 for(i=5;i<=n;i++)
 {
 	arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
 }
 return arr[n];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans); 
    return 0;
}
