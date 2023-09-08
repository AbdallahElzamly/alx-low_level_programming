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
	int n, j = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (j > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (j == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
