#include "main.h"

/* betty style doc for function main goes there */

/**
  * print_alphabet - Entry point
  *
  * Description: Print all lowercase alphabet
  *
  * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
