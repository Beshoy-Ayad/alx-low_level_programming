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
	else if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';')
		else if (*p == '.' || *p == '!' || *p == '?' || *p == '"')
		else if (*p == '(' || *p == ')' || *p == '{' || *p == '}')
	{
		flag = 1;
	}
		p++;
	}

	return (s);
}
