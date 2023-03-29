#include "main.h"
#include <string.h>

/**
 *_strcat - This function appends the src string to the dest string
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, ii;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (ii = 0; src[ii]; ii++)
	{
		dest[i++] = src[ii];
	}
	return (dest);
}
