# include <stdio.h>

	int divi(int x, int y,int z)
//	int mahi(int z)
	{
	//	return (x/y);
		return (x -(y*z));
	}
	int main(){
		int x=12,y=5,z=2,m;
		m= divi( x,y,z);
	//	m= mahi(x,y,z);
		//printf(" quotient is %d",z);
		printf(" remainder is %d",m);
	return 0;
}
