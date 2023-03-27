#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 */

int main(void)
{
	char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int len = 64;
	int sum = 2772;
	int i, val;
	char pass[65];

	srand(time(NULL));

	for (i = 0; i < len - 1; i++)
	{
		val = rand() % (sum / (len - i));
		pass[i] = chars[val % 62];
		sum -= val;
	}
	pass[i] = sum;
	pass[i + 1] = '\0';
	printf("%s\n", pass);
	return (0);
}
