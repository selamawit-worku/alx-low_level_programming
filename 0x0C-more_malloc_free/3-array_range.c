#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_integer(int min, int max)
{
	int *result;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	result = malloc(size * sizeof(*result));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(result + i) = min;
	return (result);
}
