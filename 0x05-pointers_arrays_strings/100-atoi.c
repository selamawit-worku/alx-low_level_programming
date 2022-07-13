#include <stdio.h>
#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return res;
}
