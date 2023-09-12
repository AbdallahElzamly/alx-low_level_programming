#include "main.h"

/**
 * _abs - function to check if
 * character is an alphabetical char
 *
 * @n: checks input of function
 *
 * Return: 1 if 'n' is Positive
 * -1 if 'n' is negtive
 * otherwise 0 if 'n' is zero
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
