#include <conio.h>
#include <stdio.h>
int main()
{
	int num;
	int sum_negatives = 0, sum_positives =0;
	int positives =0,negatives = 0;
	float mean_positives =0.0, mean_negatives = 0.0;
	
	printf("\n enter -1 to exit...");
	printf("\n\n enter any number:");
	scanf("%d",&num);
	
	do
	{
		if(num>0)
		{
			 sum_positives +=num;
			positives++;
		}
		else if (num<0)
	    {
	    	  sum_negatives += num;
	    	 negatives++;
		}
		printf("\n\n enter the any number:");
		scanf("%d",&num);
	}while(num!=-1);
	mean_positives = sum_positives/positives;
	mean_positives = sum_positives/negatives;
	printf("\n sum of all positives numbers entered=%d",sum_positives);
	printf("\n mean of all positives numbers entered=%f",mean_positives);
	printf("\n sum of all negatives numbers entered=%d",sum_negatives);
	printf("\n mean of the all neagtives numbers entered =%f",mean_negatives);
	return 0;
}

