#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tt;
	int oo;
	int t;
	int o;

	for (tt = '0'; tt <= '9'; tt++)
	{
		for (oo = '0'; oo <= '9'; oo++)
		{
			for (t = tt; t <= '9'; t++)
			{
				for (o = oo + 1; o <= '9'; o++)
				{
					putchar(tt);
					putchar(oo);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tt == '9' && oo == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}

	putchar('\n');
	return (0);
}
