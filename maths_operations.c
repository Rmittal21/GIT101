//Menu driven program for basic mathematical operations.
#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    int a,b,sum,diff,mul,mod;
    double div;
    printf("  *** MENU ***\n\n '+' for Addition\n '-' for Subtraction\n '*' for Multiplication\n '%' for Remainder\n '/' for Division\n");
    printf("\nEnter operator of your choice: ");
    scanf("%c",&n);
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    switch(n)
    {
    case '+':
        sum=a+b;
        printf("The sum is: %d",sum);
        break;
    case '-':
        diff=a-b;
        printf("The difference is: %d",diff);
        break;
    case '*':
        mul=a*b;
        printf("The product is: %d",mul);
        break;
    case '%':
        mod=a%b;
        printf("The remainder is: %d",mod);
        break;
    case '/':
        div= (double) a/b;
        printf("The quotient is: %f",div);
        break;
    default:
        printf("Invalid option");
    }
}
