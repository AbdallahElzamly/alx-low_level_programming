#include "main.h"

/**
 * print_rev_recursion - prints the string in reverse
 * @s: The string that will be printed
 *
 * Return: reversed printed string
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
