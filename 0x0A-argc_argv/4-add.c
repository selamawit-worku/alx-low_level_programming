#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: string array pointers
 * Return: 0 for success 1 for error
 */

int main(int argc, char *argv[])
{
	int i, j, sum;
	char *a;

	for (i = 1, sum = 0; i < argc; i++)
	{
		a = argv[i];
		for (j = 0; j < strlen(a); j++)
		{
			if (a[j] < '0' || a[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(a);
	}
	printf("%d\n", sum);
	return (0);
}
