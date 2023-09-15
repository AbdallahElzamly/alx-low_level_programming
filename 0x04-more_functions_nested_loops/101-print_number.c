#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n / 10)
		print_number(n / 10);
	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
		n1 = n;

	_putchar((n1 % 10) + '0');
}
