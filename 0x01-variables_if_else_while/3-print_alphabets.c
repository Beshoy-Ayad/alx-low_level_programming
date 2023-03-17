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
	char C;

	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(C);
	}
	putchar ('\n');
	return (0);
}
