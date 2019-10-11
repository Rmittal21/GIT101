#include<stdio.h>
int main()
{
	int a, b, i, sum=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nThe even numbers divisible by 3 but not divisible by 5 are:\n");
	for(i=a;i<=b;i++)
	{
		//conditions check
		if(i%2==0 && i%5!=0 && i%3==0)
		{
			sum+=i;
			printf("%d ",i);
		}
		else
			continue;
	}
	printf("\n\nThe sum of above numbers is: %d",sum);
	return 0;
}
