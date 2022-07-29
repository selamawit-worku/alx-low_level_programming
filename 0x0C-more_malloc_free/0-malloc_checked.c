#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to memory allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
