#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 for success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof('a'));
	printf("Size of an int: %lu byte(s)\n", sizeof(0));
	printf("Size of a long int: %lu byte(s)\n", sizeof(1L));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(10000000000000000000000000L));
	printf("Size of a float: %lu byte(s)\n", sizeof(0.1));
	return (0);
}
