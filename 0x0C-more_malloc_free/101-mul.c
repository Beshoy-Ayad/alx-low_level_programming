#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: pointer to the result or NULL on failure
 */
char *mul(char *num1, char *num2)
{
	unsigned int len1 = _strlen(num1), len2 = _strlen(num2);
	char *res;
	unsigned int i, j, k;

	if (num1 == NULL || num2 == NULL || !*num1 || !*num2)
		return (NULL);

	res = malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		res[i] = '0';
	res[i] = '\0';

	for (i = len1 - 1; i < len1; i--)
	{
		if (!_isdigit(num1[i]))
			return (NULL);
		for (j = len2 - 1, k = i + j + 1; j < len2; j--, k--)
		{
			if (!_isdigit(num2[j]))
				return (NULL);
			res[k] += (num1[i] - '0') * (num2[j] - '0');
			res[k - 1] += res[k] / 10;
			res[k] %= 10;
		}
	}
	while (*res == '0' && *(res + 1))
		res++;

	return (res);
}
