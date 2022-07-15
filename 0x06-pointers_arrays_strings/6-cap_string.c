#include "main.h"

/**
 * cap_string - capitalize each word in string
 * @n: string pointer
 * Return: string
 *
 */

char *cap_string(char *n)
{
	int i;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}

	for (i = 0; n[i] != '\0'; i++)
	{
		if (!(n[i] >= 'a' && n[i] <= 'z') && !(n[i] >= 'A' && n[i] <= 'Z'))
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				n[i + 1] = n[i + 1] - 32;

	}
	return (n);
}
