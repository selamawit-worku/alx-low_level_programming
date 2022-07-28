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
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	
}
