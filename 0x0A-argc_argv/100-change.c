#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make the change
 * @argc: num of args
 * @argv: string array arguments pointer
 * Return: 0 for success 1 for failure
 */

int main(int argc, char *argv[])
{
	int amount, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	count = 0;
	if (amount >= 25)
		while (amount >= 25)
		{
			count++;
			amount -= 25;
		}
	if (amount >= 10)
		while (amount >= 10)
		{
			count++;
			amount -= 10;
		}
	if (amount >= 5)
		while (amount >= 5)
		{
			count++;
			amount -= 5;
		}
	if (amount >= 2)
		while (amount >= 2)
		{
			count++;
			amount -=2;
		}
	if (amount == 1)
		count++;
	printf("%d\n", count);
	return (0);
}
