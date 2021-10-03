#include <conio.h>
#include <stdio.h>
void input(); 
void total(int a,int b, int c);
void average(int a ,int b, int c);
void small(int a ,int b, int c);
void large(int a ,int b, int c);

int main(){
    int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Enter 1 for total \n Enter 2 for average \n Enter 3 for large \n Enter 4 for small");
	
	int option;
    scanf("%d",&option);
	
	switch(option){
		case 1:{
			total(a,b,c);
			break;
		}
		case 2:{
			average(a,b,c);
			break;
		}
		case 3:{
			large(a,b,c);
			break;
		}
		case 4:{
			small(a,b,c);
			break;
		}
		default :{
			printf("Enter valid value");
			break;
		}
	}

	return 0;
}

//total function
void total(int a, int b, int c){
	printf("total is : %d",a+b+c);
}


//average function
void average(int a, int b, int c){
	printf("average is : %d",(a+b+c)/3);
}

//large function
void large(int a ,int b, int c){
	if(a>b){
		if(a>c){
			printf("%d is greater ",a);
		}else{
			printf("%d is greater ",c);
		}
	}else{
		if(b>c){
			printf("%d is greater ",b);
		}else{
			printf("%d is greater ",c);
		}
	}
}

//small function
void small(int a ,int b, int c){
	if(a<b){
		if(a<c){
			printf("%d is small ",a);
		}else{
			printf("%d is small ",c);
		}
	}else{
		if(b<c){
			printf("%d is small ",b);
		}else{
			printf("%d is small ",c);
		}
	}
	
}
