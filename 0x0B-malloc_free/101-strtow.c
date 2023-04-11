#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count, start, end;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	if (count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0' && k < count)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			len = 0;
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}
			end = i - 1;
			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = start; j <= end; j++)
				words[k][j - start] = str[j];
			words[k][len] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}

