#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatnates all args to a str
 * @ac: int
 * @ac: str
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	char str;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (size = 0, i = 0; i < ac; i++, size++)
		for (j = 0; av[i][j] != '\0'; j++, size++)
			;
	str = malloc(sizeof(char) * ++size);
	if (str == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
