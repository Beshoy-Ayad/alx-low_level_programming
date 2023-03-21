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
		putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		putchar(0);
		return (0);
	}
	else (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
