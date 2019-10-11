#include<stdio.h>
#include<math.h>
//function to find a^b
int myExpo(a, b)
{
    int exp=pow(a, b);
    printf("\nThe value of %d^%d is: %d", a, b, exp);
}
int main()
{
    int a, b;
    printf ("Enter the value of a and b \n");
    printf ("\n a= ");
    scanf ("%d", &a);
    printf (" b= ");
    scanf ("%d", &b);
	myExpo (a, b);//function call
    return 0;
}
