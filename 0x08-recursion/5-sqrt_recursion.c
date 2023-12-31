#include "main.h"
int sqr(int n, int val);

/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - calculate the square root
 *@n: value to calc the square root
 *@val: variable to cont
 *
 * Return: the number with the solution
 */
int sqr(int n, int val)
{
	if (n < 0)
		return (-1);
	else if (val * val > n)
		return (-1);
	else if (val * val == n)
		return (val);
	else
		return (sqr(n, val + 1));
}
