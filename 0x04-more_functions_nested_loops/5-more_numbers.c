#include "main.h"
/**
 * more_numbers - Entry pointi
 * Return:  1 (Lower), 0 (Upper)
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
				_putchar(1 + 48);
			_putchar((n % 10) + 48);
		}
		 _putchar('\n');
	}
}
