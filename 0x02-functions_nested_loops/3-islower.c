#include "main.h"

/**
 * islower - checks lower case char
 *
 * Return: 1 -if car is lowercase 0 otherwise
 */

int _islower(int c)
{
	if(97 < c && 123 > c)
		return (1);
	else
		return (0);
}
