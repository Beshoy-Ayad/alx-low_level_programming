#include "main.h"
#include <stdio.h>

/**
 * _puts - check
 * @s : char
 * Return: always 0
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
