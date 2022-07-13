#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
