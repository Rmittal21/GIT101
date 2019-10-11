#include<stdio.h>
int main()
{
	char ch;
	int c;
	printf ("Enter a character: ");
	scanf ("%c", &ch);
	c=ch;
	//c takes the decimal value of the character ch.
	if(48<=c && c<=57)
		printf ("%c is a digit with ASCII value %d", ch, c);
	else if(97<=c && c<=122)
			printf ("%c is a small case alphabet with ASCII value %d", ch, c);
		else if(65<=c && c<=90)
				printf ("%c is capital letter alphabet with ASCII value %d", ch, c);
			else 
				printf ("%c is a special character with ASCII value %d", ch, c);
	return 0;
}
