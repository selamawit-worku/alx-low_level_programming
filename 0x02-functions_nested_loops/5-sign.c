#include "main.h"

/**
 * print_sign - check if the number is -ve, +ve
 *
 * @n: input number
 *
 * Return: 1 for +ve, 0 for 0 and -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
