#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;
	int integer;
	float floatNum;
	long longNum;
	long long longlong;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longNum));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatNum));
	return (0);
}
