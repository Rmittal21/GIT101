#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	//cp ans sp are cost price and selling price resp.
	printf(" Enter Cost price of a product: ");
	scanf("%d",&cp);
	printf(" Enter Selling price of a product: ");
	scanf("%d",&sp);
	if(cp>sp){
		loss=cp-sp;
		printf("\n The seller has incured loss of %d.",loss);
	}
	else if(sp>cp){
			profit=sp-cp;
			printf("\n The seller has made profit of %d.",profit);
		}
		else
			printf("\n There is no profit no loss.");
	return 0;
}
