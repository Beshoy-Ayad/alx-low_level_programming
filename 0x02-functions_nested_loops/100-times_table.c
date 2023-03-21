#include "main.h"

/**
 * print_times_table - print table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int r;
	int c;
	int d;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				d = (r * c);
				if (c == 0)
					_putchar('0' + d);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (d <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + d);
					}
					else if (d > 9 && d < 100)
					{
						_putchar(' ');
						_putchar('0' + (d / 10));
						_putchar('0' + (d % 10));
					}
					else if (d >= 100)
					{
						_putchar('0' + (d / 100));
						_putchar('0' + ((d / 10) % 10));
						_putchar('0' + (d % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
