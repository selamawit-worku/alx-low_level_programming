#include "main.h"

/**
 * _strncat - concatnate two strings using at most n bystes from src
 * @dest: destination string
 * @src: source string value
 * @n: max byte size
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i++] != '\0';)
	{
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
