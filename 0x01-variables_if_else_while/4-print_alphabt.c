#include <stdio.h>

/**
 * main: print alphabet exclude e and q
 *
 * return: (0) for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if(c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);

}
