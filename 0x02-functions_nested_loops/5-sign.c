#include "main.h"

/**
 * print_sign - function to check if
 * character is an alphabetical char
 *
 * @c: checks input of function
 *
 * Return: 1 if 'n' is lowercase
 * otherwise 0
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
