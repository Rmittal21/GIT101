/* C program to accept a set of numbers and
 arrange them in descending order*/
#include <stdio.h>
int main ()
{
 
	int number[30];
 	int i, j, a, n;
    printf("Enter the value of n: ");
	scanf("%d", &n);
 	printf("\nEnter the numbers: \n");
    for (i = 0; i < n; ++i)
	    scanf("%d", &number[i]);
 	//sorting begins
 	for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j) 
        {
            if (number[i] < number[j]) 
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
 	printf("\nThe numbers arranged in descending order are:\n");
 	//displaying the sorted array
 	for (i = 0; i < n; ++i) 
		printf("%d\t", number[i]);
 	return 0;
}
