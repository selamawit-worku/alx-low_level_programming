#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string value
 * Return: void
 */

void _puts(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		_putchar(s[l]);
		l++;
	}

	_putchar('\n');
}
