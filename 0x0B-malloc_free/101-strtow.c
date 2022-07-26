#include <stdlib.h>
#include "main.h"

/**
 * wCounterRec - count words
 * @str: string
 * @i: int
 * Return: int
 */

int wCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wCounterRec(str, i + 1));
	return (wCounterRec(str, i + 1));
}
/**
 * wcount - count words
 * @str: string
 * Return: int
 */

int wcount(char *str)
{
	if (str[0] != ' ')
		return (1 + wCounterRec(str, 0));
	return (wCounterRec(str, 0));
}

/**
 * strtow - splits string into words
 * @str: string
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char **result;
	int i, j, k, w;

	if (str == NULL || str[0] == 0)
		return (NULL);
	w = wcount(str);
	if (w < 1)
		return (NULL);
	result = malloc(sizeof(char *) * w);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < w && *str != '\0';)
	{
		if (*str != ' ')
		{
			for (j = 0; str[j] != ' '; j++)
				;
			result[i] = malloc(sizeof(char) * (j + 1));
			if (result[i] == NULL)
			{
				while (--i >= 0)
					free(result[i]);
				free(result);
				return (NULL);
			}
			for (k = 0; k < j; k++, str++)
				result[i][k] = *str;
			result[i][k] = '\0';
			i++;
		}
		str++;
	}
	result[i] = '\0';
	return (result);
}
