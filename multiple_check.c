#include<stdio.h>
int main()
{
	int a, b;
	printf ("Enter two integers:\n");
	printf ("\na= ");
	scanf ("%d", &a);
	printf ("b= ");
	scanf ("%d", &b);
	if(a%b==0)
		printf("\n%d is a multiple of %d",a,b);
	else
		printf("\n%d is a not a multiple of %d",a,b);
	return 0;
}
