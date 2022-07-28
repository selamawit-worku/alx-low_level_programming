#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of argument
 * @argv: string array pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
