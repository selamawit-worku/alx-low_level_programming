#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checker - check for number
 * @a: string
 * @Return: -1 if not number else return number it self as integer
 */

int checker(char *a)
{
	int i, num;
	
	for (num = 0, i = 0; i < strlen(a); i++)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		num = num * 10 + (a[i] - '0');
	}
	return (num);
}

/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: string array pointers
 * Return: 0 for success 1 for error
 */

int main(int argc, char *argv[])
{
	int i, sum, num = 0;

	for (i = 0, sum = 0; i < argc; i++)
	{
		num = checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
