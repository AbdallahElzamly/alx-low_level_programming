#include "main.h"

/**
 * print_sign - function to check if
 * character is an alphabetical char
 *
 * @c: checks input of function
 *
 * Return: 1 if 'n' is Positive
 * -1 if 'n' is negtive
 * otherwise 0 if 'n' is zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
