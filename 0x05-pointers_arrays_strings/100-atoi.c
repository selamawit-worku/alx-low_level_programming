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
	int numberDetected = 0;
	int signDetermine = 0;

	for (i = 0; s[i] != '\0'; ++i){
		if (numberDetected == 0 && s[i] == '-')
			signDetermine++;
		if (numberDetected == 1 && (s[i]<=48 || s[i]>=57))
			break;

		if ((s[i] >= 48 && s[i] <= 57))
		{
			numberDetected = 1;
			res = res * 10 + s[i] - '0';
		}
	}
	if (signDetermine % 2)
		res *= -1;
	return res;
}
