#include "main.h"
/**
 * print_most_numbers - Entry point
 * Return:  1 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for ( i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
