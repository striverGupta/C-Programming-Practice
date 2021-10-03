#include<stdio.h>
#include<conio.h>
int main(){
	float totalamt,amt,subtotal,discountamt,taxamt,qty,val,
	discount,tax;
	printf("\n Enter the quantity of item sold:");
	scanf("%f",&qty);
	printf("\n Enter the value of item:");
	scanf("%f",&val);
	printf("\n Enter the discount percentage:");
	scanf("%f",&discount);
	printf("\n Enter the tax:");
	scanf("%f",&tax);
	
	amt = qty* val;
	discountamt=(amt * discount)/100.0;
	subtotal = amt-discountamt;
	taxamt = (subtotal * tax)/100.0;
	totalamt = subtotal + taxamt;
	
	printf("\n \n \n *******bill*******:");
	printf("\n quantity sold:  %f",qty);
	printf("\n price per item :  %f",val);
	printf("\n \t \t-----------------");
	printf("\n amount:   %f",amt);
	printf("\n discount :   -%f",discountamt);
	printf("\n discount total:  %f",subtotal);
	printf("\n tax:  + %f",taxamt);
	printf("\n \t \t --------------------");
	printf("\n total amount :  %f",totalamt);
	return 0;
}
