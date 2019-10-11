//Menu driven program to calculate area of different 2-D structures.
#include<stdio.h>
#include<math.h>
int main()
{
	int choice,r,a,b,c;
	float area;
	printf("  **** MENU ****");
	printf("\n1.Calculate area of circle.");
	printf("\n2.Calculate area of rectangle.");
	printf("\n3.Calculate area of triangle.");
	printf("\n\nEnter your choice(1-3): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	printf("Enter radius of circle: ");
				scanf("%d",&r);
				//r is the radius of the circle
				area=(float)(3.14*r*r);
				printf("Area of circle is: %f",area);
				break;
		case 2: printf("Enter two sides of rectangle:");
				scanf("%d%d",&a,&b);
				//a and b are adjacent sides of rectangle.
				printf("Area of rectangle is: %d",a*b);
				break;
		case 3: printf("Enter three sides of triangle: ");
				scanf("%d%d%d",&a,&b,&c);
				float s=(a+b+c)/2;
				//s is the semi-perimeter of triangle
				area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
				//using Heron's formula
				printf("Area of triangle: %f",area);
				break;
		default:printf("wrong choice!");
	}
	return 0;
}
