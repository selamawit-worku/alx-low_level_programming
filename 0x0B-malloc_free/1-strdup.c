#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to mem loca
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strdup = malloc(sizeof(*str) * ++i);
	if (strdup == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		strdup[j] = str[j];
	return (strdup);
}
