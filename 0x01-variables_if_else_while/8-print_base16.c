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
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');
	return (0);
}
