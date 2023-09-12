#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: the starting point
 * Return: start from n and print till 98
*/
void print_to_98(int n)
{
	int c;
	/*
	 * case 1 n > 98
	 */
	if (n > 98)
	{
	for (c = n; c > 98; c--)
		printf("%d, ", c);
	}
	/*
	 * case 2 n < 98
	 */
	for (c = n; c < 98; c++)
		printf("%d, ", c);
	printf("98\n");
}
