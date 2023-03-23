#include "main.h"
/**
 * print_square - prints a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		_putchar('#');
	}
		_putchar('\n');
}
