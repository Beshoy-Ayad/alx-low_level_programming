#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL if it fails
 */

int count_words(char *str)
{
	int i = 0;
	int count = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if (i < len && str[i] != ' ')
		{
			count++;
			while (i < len && str[i] != ' ')
			{
				i++;
			}
		}
	}

	return (count);
}


/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL if it fails
 */

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = strlen(str);
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	words = malloc((count_words(str) + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;
		if (i < len && str[i] != ' ')
		{
			j = i;
			while (i < len && str[i] != ' ')
				i++;
			words[k] = malloc((i - j + 1) * sizeof(char));
			if (words[k] == NULL)
				return (NULL);
			strncpy(words[k], &str[j], i - j);
			words[k][i - j] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
