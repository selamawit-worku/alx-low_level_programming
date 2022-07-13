#include <stdio.h>
#include <limits.h>
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
	int sign = 1;
	int numberDetected = 0;

	while (s[i] != '\0')
	{
		if (numberDetected == 0 && s[i] == '-')
			sign *= -1;
		if (numberDetected == 1 && (s[i] < '0' || s[i] > '9'))
			break;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (numberDetected == 0)
				numberDetected = 1;
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7))
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			res *= 10;
			res += (s[i] - '0');
		}
		i++;
	}

	res *= sign;

	return (res);
}
