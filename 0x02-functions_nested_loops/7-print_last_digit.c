#include "main.h"

/**
 * print_last_digit - function to print the 
 * last digit
 * 
 * @n: checks input of function
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
        int last;
        
        last = n % 10;
        if (last < 0)
            last*=-1;
        _putchar(last + '0');
        return (last);
}
