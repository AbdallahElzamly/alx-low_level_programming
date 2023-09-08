#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Description: Check if the last number is negative or positive or zero
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int j;

	j = n % 10;
	if (n % 10 > 5)
	{
		printf("Last digit of %d and is %d and is greater than 5\n", n, j);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d and is 0\n", n, j);
	}
	else if (n < 0)
	{
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, j);
	}
	return (0);
}
