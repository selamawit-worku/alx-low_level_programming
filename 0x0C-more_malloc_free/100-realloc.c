#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory
 * @ptr: void ptr
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	np = malloc(new_size * sizeof(char));
	if (np == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			np[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (np);
	}
	while (i < new_size)
	{
		np[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (np);
}
