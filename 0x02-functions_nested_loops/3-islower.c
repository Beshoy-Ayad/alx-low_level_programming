#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Entry point
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int r;

	r = 0;
	while (r < 10)
	{
		_putchar(r + '0');
		r++;
	}
	_putchar('\n');
	return (0);
}
