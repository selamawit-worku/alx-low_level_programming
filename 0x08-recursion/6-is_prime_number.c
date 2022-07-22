#include "main.h"

/**
 * sqrtrec - sqrt
 * @n: num
 * @m: comparison
 * Return: sqrt
 */

int sqrtrec(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqrtrec(n - 1, m));
}

/**
 * rec_sqrt - sqrt
 * @n: input
 * Return: int
 */

int rec_sqrt(int n)
{
	if (n == 1)
		return (1);
	return (sqrtrec(n /2, n));
}

/**
 * is_prime_number - identify prime number
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1 || rec_sqrt(n) >= 1)
		return (0);
	if (rec_sqrt(n) == -1)
		return (1);
	return (rec_sqrt(n));
}
