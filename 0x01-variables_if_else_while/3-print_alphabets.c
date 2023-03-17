#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	char d;

	for (d = 'A' ; d <= 'Z' ; d++)
	{
		putchar(d);
	}
	putchar ('\n');
	return (0);
}
