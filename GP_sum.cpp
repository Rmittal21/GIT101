#include<stdio.h>
#include<math.h>
int main()
{
	float a, r, n,sum=0;
	//a is the first term of geometric series
	//r is the common ratio of GP
	//n is the number of terms of GP
	printf("Enter first term: ");
	scanf("%f",&a);
	printf("Enter common ratio: ");
	scanf("%f",&r);
	printf("Enter no. of terms: ");
	scanf("%f",&n);
	if(r>1)
		sum=(a*(pow(r,n)-1))/(r-1);
	else if(r<1)
			sum=(a*(1-pow(r,n)))/(1-r);
		else
			sum=n*a;//It will be a constant series
	printf("\n\nSum of the geometric series is: %f",sum);
	return 0;
}
