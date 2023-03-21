#include <stdio.h>

/**
 *  print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c = 'a';
	int d = 1;

	while (d <= 10)
	{
		while (c <= 'z')
		{
			putchar(c);
		}
	}
	putchar('\n');
}

