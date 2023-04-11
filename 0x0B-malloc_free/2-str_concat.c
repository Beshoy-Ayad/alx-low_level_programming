#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory which
 * contains the contents of s1,
 * followed by the contents of s2, and null terminated or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_len;
	unsigned int s2_len;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strcpy(concat_str + s1_len, s2);

	return (concat_str);
}
