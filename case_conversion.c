#include <stdio.h>
#include <string.h>
int main() 
{
  	char s[100];
   	int i;
   	printf ("\nEnter a string of alphabets : ");
   	gets (s);//to enter a string
   	for (i = 0; s[i]!='\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
         	s[i] = s[i] - 32;
      	else
    		s[i] = s[i] + 32;
   	}
   	printf("\nString after changing the case(lower&upper) is: %s", s);
   	return 0;
}
