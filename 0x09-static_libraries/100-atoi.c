#include "main.h"
#include <stdio.h>
/**
 * _atoi - check
 * @s : char
 * Return: always 0
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '_')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		result = result * 10 + s[i] - '0';
	}
	return sign * result;
	return (0);
}
