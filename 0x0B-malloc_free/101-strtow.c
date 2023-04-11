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
	int i, j, len = 0, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ')
			str++;
		for (j = 0; str[j] != ' ' && str[j] != '\0'; j++)
			len++;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], str, len);
		words[i][len] = '\0';
		str += len;
		len = 0;
	}
	words[word_count] = NULL;
	return (words);
}
