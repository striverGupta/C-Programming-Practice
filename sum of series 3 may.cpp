# include <stdio.h>
# include <math.h>
int fact(int);
int main(){
	int n,i,num,deno;
	float sum =0.0;
	printf("\n");
	scanf("%d",&n);
	for (i=1; i<=n;i++)
	{
		num= pow(i,i);
		deno= fact(i);
		sum+= (float)num/deno;
		
	}
	printf("\n 1/1! +4/2!+ 27/3!+......= %f",sum);

	return 0;
}
int fact(int n)
{
	int f= 1,i;
	for (i=n; i>=1;i--)
	f=f*i;
	return f;
}
