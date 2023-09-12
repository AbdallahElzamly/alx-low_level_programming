#include "main.h"

/**
 * _isalpha - function to check if
 * character is an alphabetical char
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is lowercase
 * otherwise 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
