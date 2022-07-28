#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplier
 * @argc: number of arguments
 * @argv: string array pointer
 * Return: 0 for success or 1 for failure
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
	
}
