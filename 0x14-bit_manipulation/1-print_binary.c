#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		mask = mask >> 1;
	}

	if (flag == 0)
		putchar('0');
}
