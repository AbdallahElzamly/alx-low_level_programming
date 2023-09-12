#include "main.h"

/**
 * times_table - Print every day minute
 * Return: every minute of the day
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar(48);
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = mult * num;
			/*
			 If it's a single number less than 9 print a ".." before it
			 otherwise take the first digit
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
