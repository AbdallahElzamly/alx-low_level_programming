#include "main.h"

/**
 * swap_int: swaps the value of tow int
 * @a: pointer to first value
 * @b: pointer to secnd value
 */
swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
