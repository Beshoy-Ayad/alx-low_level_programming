#include "main.h"

/**
 * times_table - start
 */

void times_table(void)
{
	int r;
	int c;
	int d;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			d = (r * c);

			if (c == 0)
			{
				_putchar('0' + d);
			}
			else if (d <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + d);
			}
			else if (d > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (d / 10));
				_putchar('0' + (d % 10));
			}
		}
		_putchar('\n');
	}
}
