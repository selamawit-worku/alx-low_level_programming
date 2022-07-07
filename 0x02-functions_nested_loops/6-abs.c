#include "main.h"

/**
 * _abs - calculate absolute value of a number
 *
 * @n: integer
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
