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
		n *= -1;
	}

	last_digit = (n % 10);

	_putchar('0' +  last_digit);
	return (last_digit);
}
