#include "main.h"

/**
 * _strncat - concatenate
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[m] != src[n])
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';

	return (dest);
}
