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
	char ch = "0";

	while (ch <= "10")
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
