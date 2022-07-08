#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: size of a triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int r, c, i;

	if (size <= 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
			_putchar(' ');
		for (i = r + c; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}
