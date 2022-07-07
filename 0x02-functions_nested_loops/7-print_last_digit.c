#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n:  integer
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	_putchar(i + 48);
	return (i);

}
