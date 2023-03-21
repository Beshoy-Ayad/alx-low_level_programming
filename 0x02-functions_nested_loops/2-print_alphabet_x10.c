#include <stdio.h>

/**
 *  print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 'a';c <= 'z' ;c++)
		{
			putchar(c);
		}
	putchar('\n');
	}
}

