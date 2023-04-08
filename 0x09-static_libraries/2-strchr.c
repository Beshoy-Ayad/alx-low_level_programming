#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - check
 * @s : char
 * @c : char
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return (NULL);
}
