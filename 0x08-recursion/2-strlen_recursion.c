#include "main.h"

/**
 * _strlen_recursion(char *s)
 * @s: string ptr
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	else
		_strlen_recursion(s + len++);
}
