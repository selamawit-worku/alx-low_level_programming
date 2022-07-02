#include <stdio.h>

/**
 * main - reverse alphabet
 *
 * Return: (0) for success
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
