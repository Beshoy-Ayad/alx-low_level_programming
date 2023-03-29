#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: 1st number
 * @n2: 2nd number
 * @r: is the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int sum;
	int carry = 0;

	while (n1[len1])
		len1++;

	while (n2[len2])
		len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	i = 0;

	while (len1 > 0 || len2 > 0)
	{
		sum = carry;

		if (len1 > 0)
			sum += n1[len1 - 1] - '0';

			if (len2 > 0)
				sum += n2[len2 - 1] - '0';

			r[i] = (sum % 10) + '0';

			carry = sum / 10;

			i++;
			len1--;
			len2--;
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		i++;
	}
	r[i] = '\0';

	for (i = 0; i < (size_r - 1) / 2; i++)
	{
		char temp = r[i];

		r[i] = r[size_r - 2 - i];
		r[size_r - 2 - i] = temp;
	}
	return (r);
}
