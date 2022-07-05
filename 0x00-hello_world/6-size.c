#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;
	long long longlong;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(0));
	printf("Size of a long int: %lu byte(s)\n", sizeof(1L));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(0.1));
	return (0);
}
