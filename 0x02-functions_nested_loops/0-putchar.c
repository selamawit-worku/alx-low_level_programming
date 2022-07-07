#include "main.h"

/**
 * main - main function
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');

	return (0);
}
