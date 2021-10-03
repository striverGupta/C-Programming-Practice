#include <stdio.h>
#include <conio.h>
int numberofpaths(int m,int n){
	
	int a[m][n];
	// count of paths to reach any cell in first column is 1
	for(int i=0;i<m;i++)
	a[i][0]=1;
	
	// count of paths to reach any cell any cell in first row is 1
	
	for(int j =0;j<n;j++)
	a[0][j]=1;
	
	for(int i=1; i<m ;i++){
	for (int j=1;j<n; j++)
	
	a[i][j]=a[i-1][j]+a[i][j-1];
}
     return a[m-1][n-1];
 }
 int main(){
 	
 	printf("%d",numberofpaths(2,3));
 
	
	return 0;
}
