#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Entry point
 * Return:  1 (Lower), 0 (Upper) 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
