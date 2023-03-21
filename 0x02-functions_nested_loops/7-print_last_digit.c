#include "main.h"
/**
 * print_last_digit - Entry pointi
 * @n: print letter
 * Return:  last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
