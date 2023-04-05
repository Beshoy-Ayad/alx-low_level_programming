#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 palindrome, 0 not palindrome
 */

int is_palindrome(char *s)
{
	int i;
	int j;

	i = 0;
	j = strlen(s) - 1;
	for (; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
