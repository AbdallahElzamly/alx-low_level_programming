#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Description: Print all lowercase and upper case alphabet
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	int d1 = 0, d2;

	while (d1 < 9)
	{
		d2 = 1;
		while (d2 < 10)
		{
			if (d1 < d2 && d1 != d2)
			{
				putchart(d1 + 48);
				putchart(d2 + 48);
			
				if (d1 + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
		
	}
	putchar('\n');
	return (0);
}

