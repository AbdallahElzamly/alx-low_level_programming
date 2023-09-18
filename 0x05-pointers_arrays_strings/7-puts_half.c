#include "main.h"
/**
 * puts_half - pritn the last half of the str
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, len = 0;

	while (str[len])
		len++;
	for (n = len / 2; n <= len; n++)
		_putchar(str[n])
	_putchar('\n');
}
