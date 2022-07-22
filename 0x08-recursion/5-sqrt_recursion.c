#include "main.h"

/**
 * recursion_sqrt - return sqrt
 * @s: start 
 * @e: end
 * @n: num
 * Return: int
 */

int  recursion_sqrt(int s, int e, int n)
{
	int m;

	if (e >= s)
	{
		m = s + (e - s) / 2;
		if (m * m == n)
			return (m);
		if (m * m > n)
			return (recursion_sqrt(s, m - 1, n));
		if (m * m < n)
			return (recursion_sqrt(m + 1, e, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - sqrt of a number
 * @n: number
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	       return (n);
	return (recursion_sqrt(2, n, n));
}
