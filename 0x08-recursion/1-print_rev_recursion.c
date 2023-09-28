#include "main.h"

/**
 * print_rev_recursion - prints the string in reverse
 * @s: The string that will be printed
 *
 * Return: reversed printed string
 */

void print_rev_recursion(char *s)
{
	if (*s > '\0')
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
