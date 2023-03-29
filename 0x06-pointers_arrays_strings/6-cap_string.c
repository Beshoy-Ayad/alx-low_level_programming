#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: result
 */

char *cap_string(char *s)
{
	char *p = s;
	int flag = 1;
	char f[13] = { ' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}' }
	int i;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			if (flag)
		{
			*p = *p - 32;
			flag = 0;
		}
	}
	else
	{
		for (i = 0; i < 13; i++)
		{
			if (*p == f[i])
			{
				flag = 1;
				break;
			}
		}
	}
		p++;
	}

	return (s);
}
