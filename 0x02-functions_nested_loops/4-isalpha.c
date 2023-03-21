#include "main.h"
/**
 * _isalpha - Entry pointi
 * @c: print letter
 * Return:  1 (Letter), 0 (Otherwise)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
