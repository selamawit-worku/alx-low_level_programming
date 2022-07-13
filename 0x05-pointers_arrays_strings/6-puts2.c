#include <stdio.h>
#include "main.h"

/**
 * puts2 - print two values
 * @str: string value
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *x = str;
	int y;

	for (; *x != '\0'; x++, len++)
	{
	}
	l = len - 1;
	for (y = 0; y <= l; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
