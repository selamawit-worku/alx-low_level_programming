#include <stdio.h>

/**
 * main - base 16 digits
 *
 * Return: (0) for success
 */

int main(void)
{
	char i;

	for (i ='0'; i <= '9'; i++)
		putchar(i);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	
	putchar('\n');

	return (0); 
}
