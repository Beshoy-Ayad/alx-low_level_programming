#include "main.h"

/**
 * print_sign - Entry point
 * @n: print letter
 * Return:  1 (Letter), 0 (Otherwise)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(00);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
