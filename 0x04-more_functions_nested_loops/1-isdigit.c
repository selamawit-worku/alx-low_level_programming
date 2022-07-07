#include "main.h"

/**
 * _isdigit - checks if the input is digit
 *
 * @c: char to check
 *
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(char c)
{
	if (c>=48 && c<= 57)
		return (1);
	return (0);
}
