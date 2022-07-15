#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: final string
 * @src: source string
 * @n: max number of byte to be copied
 * Return: char*
 */

char *_strcpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] !='\0'; j++)
		dest[j] = src[j];
	for (; j< n; j++)
		dest[j] = '\0';
	return (dest);
}
