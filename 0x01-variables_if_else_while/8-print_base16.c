#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Description: Print all lowercase and upper case alphabet
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	char ch = 'a';

	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
