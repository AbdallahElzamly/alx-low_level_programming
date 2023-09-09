#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Description: Print all lowercase alphabet
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == ‘e’ || ch == ‘q’)
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
