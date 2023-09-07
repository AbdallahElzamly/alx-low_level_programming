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
pritnf("Size of a char: ", sizeof(char), "byte(s)");
pritnf("Size of an int: ", sizeof(int), "byte(s)");
pritnf("Size of a long int: ", sizeof(long int), "byte(s)");
pritnf("Size of a long long int: ", sizeof(long long int), "byte(s)");
pritnf("Size of a float: ", sizeof(float), "byte(s)");
return (0);
}
