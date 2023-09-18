#include "main.h"
/**
 * puts_half - pritn the last half of the str
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, len = 1;

	while (str[len - 1])
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
