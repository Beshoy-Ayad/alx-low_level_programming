#include "main.h"
/**
 * _strcpy - check
 * @dest : char
 * @src : char
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
