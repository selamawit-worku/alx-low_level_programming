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
	int temp;
	int *rev;

	for (j = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
