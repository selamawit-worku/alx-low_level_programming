#include <stdio.h>

/**
 * main - single digit base 10 numbers
 *
 * Return: (0) for success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);

}
