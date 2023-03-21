#include <stdio.h>

/**
 * _islower  - Entry point
 * Return:  1 (lower)
 * Return:  2 (upper)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
