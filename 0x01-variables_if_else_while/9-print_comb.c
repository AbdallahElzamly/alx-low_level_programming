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
		putchar(i + 48);
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar("\n");
	return (0);
}

