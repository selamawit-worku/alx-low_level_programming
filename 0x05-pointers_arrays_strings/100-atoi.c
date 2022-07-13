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
	char sign = '+';

	for (i = 0; s[i] != '\0'; ++i){
		if ((s[i] >= 48 && s[i] <= 57))
		{
			if(i != 0 && s[i - 1] == '-')
				sign = '-';
			res = res * 10 + s[i] - '0';
		}
	}
	if (sign == '-')
		res *= -1;
	return res;
}
