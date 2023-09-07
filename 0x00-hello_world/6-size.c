#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: A C program that prints with put function.
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
pritnf("Size of a char: %lu byte(s)", sizeof(char));
pritnf("Size of an int: %lu byte(s)", sizeof(int));
pritnf("Size of a long int: %lu byte(s)", sizeof(long int));
pritnf("Size of a long long int: %lu byte(s)", sizeof(long long int));
pritnf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
