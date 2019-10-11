#include<stdio.h>
/*Function to convert decimal to binary
 and count no. of 0's and 1's*/
void convertD2B(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1, one=0, zero=0;
    int ori=n;
    while (n!=0)
    {
        remainder = n%2;
        if(remainder==1)
        	one++;
        else
        	zero++;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    printf("\n%d in decimal = %lld in binary", ori, binaryNumber);
    printf("\nNumber of 0's = %d",zero);
    printf("\nNumber of 1's = %d",one);
}
int main()
{
	int num;
	printf("Enter a decimal number: ");
    scanf("%d", &num);
    convertD2B(num);
	return 0;
}
