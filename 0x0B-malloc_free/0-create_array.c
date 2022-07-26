#include "main.h"
#include <stdio.h>

/**
 * create_array - creates array
 * @size: int
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if(str == null)
		return (NULL);
	i = 0;
	while (i < size)
	{
		size[i] = c;
		i++;
	}
	return (str);
}
