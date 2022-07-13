#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	for (; *(src + l) != '\0'; l++)
		;
	for(; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
}
