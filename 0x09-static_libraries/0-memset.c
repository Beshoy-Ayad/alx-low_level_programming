#include "main.h"
#include <stdio.h>
/**
 * _memset - check
 * @s : char
 * @b : char
 * @n : int
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n)
	{
		if (s)
        	{
        		printf("c\n");
        	}
		if (b)
		{
			printf("b\n");
		}	
	}
	return (0);
}
