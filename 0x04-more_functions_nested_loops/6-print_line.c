#include "main.h"

/**
 * print_line - draws a straight line in terminal
 *
 * @n: number of times _ will be printed
 *
 * Return: void
 */

void print_line(int n)
{
	 for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
