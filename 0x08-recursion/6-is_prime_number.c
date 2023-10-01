#include "main.h"
#include "math.h"

int check(int n, int lim);
/**
 * is_prime_number - check if prime or no?
 * @n: the input nuber
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n<=1)
		return (0);
	else
		return (check(n, sqrt(n)));
}

/**
 * check - a helper fuction to find the answer
 * @n: the test num
 * @lim: the limit of the numberof tests
 *
 * Return: 1 if ok 0 if no
 */
int check(int n, int lim)
{
	if (lim == 1)
		return (1);
	if (n % lim == 0)
		return (0);
	else
		return (check(n, lim - 1));
}
