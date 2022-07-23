#include "main.h"

/**
 * _isalpha - checks if the input is a letter or not
 *
 * @c: char in ASCII code
 *
 * Return: 1 for letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
