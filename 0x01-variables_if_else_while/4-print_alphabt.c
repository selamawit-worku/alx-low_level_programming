#include <stdio.h>

/**
 * main -  print alphabet excluding e and q
 *
 * Return: (0) for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);

}
