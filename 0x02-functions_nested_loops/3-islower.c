#include "main.h"

/**
 * _islower - checks lower case char
 *
 *@c: the character in ASCII code
 *
 * Return: 1 -if car is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (97 < c && 123 > c)
		return (1);
	else
		return (0);
}
