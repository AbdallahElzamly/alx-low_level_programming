#include "main.h"

/* betty style doc for function main goes there */

/**
  * print_alphabet_x10 - Entry point
  *
  * Description: Print all lowercase alphabet 10x
  *
  * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

}
