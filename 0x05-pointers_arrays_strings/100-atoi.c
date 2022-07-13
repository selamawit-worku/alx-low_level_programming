#include <stdio.h>
#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	char *res;
	int i;
	int j = 0;
	int numberDetected = 0;
	int signDetermine = 0;

	for (i = 0; s[i] != '\0'; ++i){
		if (numberDetected == 0 && s[i] == '-')
			signDetermine++;
		if (numberDetected == 1 && (s[i] < 48 || s[i] > 57))
			break;

		if (numberDetected == 0 && s[i] >= 48 && s[i] <= 57){
			numberDetected = 1;
			if (signDetermine % 2)
				res[j++] = '-';
		}

		if (s[i] >= 48 && s[i] <= 57)
			res[j++] = s[i];
	}

	return (res);
}
