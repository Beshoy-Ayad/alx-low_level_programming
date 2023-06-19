#include "main.h"
/**
 * _isupper - Entry point
 * @c: print letter
 * Return:  1 (Upper), 0 (Lower)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
