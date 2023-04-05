#include "main.h"
#include <stdio.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 palindrome, 0 not palindrome
 */

int is_palindrome(char *s)
{
	int i;
	int len;

	len = strlen(s) - 1;
	while (i < len)
	{
		if (s[i] != s[len])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
