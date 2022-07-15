#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array pointer
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *rev;

	for (j = 0, i = n - 1; j<n && i >= 0; j++, i--)
		rev[i] = a[j];
	a = rev;
}
