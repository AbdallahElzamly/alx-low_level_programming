#include "main.h"
#include "string.h"

int hlp(char *s, int start, int end);
/**
 * is_palindrome - Check if the string is palindrome or NO?
 * @s: the test string
 * Return: 1 if palindrome 0 if no
 */

int is_palindrome(char *s)
{
	int start = 0, end = strlen(s) - 1;
	return hlp(s, start, end);
}

/**
 * hlp - check if panlidrom or no?
 * @s: the string we want to test
 * @start: the start of the search
 * @end: the end of hte search
 *
 * Return: 1 if palindrome 0 no
 */

int hlp(char *s, int start, int end)
{
	if (start >= end)
		return (s[start] == s[end]);
	if (s[start] != s[end])
		return 0;
	else
		return hlp(s, start + 1, end - 1);
}
