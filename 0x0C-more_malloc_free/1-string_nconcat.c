#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatnates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit in s2
 * Return: pointur to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int i;
	unsigned int j;

	if(s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	result = malloc(sizeof(char) * (i + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
}
