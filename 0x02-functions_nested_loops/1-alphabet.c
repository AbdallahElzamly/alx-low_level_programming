#include "main.h"

/*
 * Description:  print_alphabet - utilitzes on the
 * _putchar funtion to print
 * the alphabet a - x
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
