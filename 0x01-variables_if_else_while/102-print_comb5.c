#include <stdio.h>

/**
 * main - prints possible combinations of two 2-digit numbers
 *
 * Return: (0) for success
 */

int main(void)
{
	int num1tens;
	int num1ones;
	int num2tens;
	int num2ones;

	for (num1tens = 0; num1tens <= 9; num1tens++)
	{
		for (num1ones = 0; num1ones <= 9; num1ones++)
		{
			for (num2tens = num1tens; num2tens <= 9; num2tens++)
			{
				if (num2tens == num1tens)
				{
					num2ones = num1ones + 1;
				}
				else
					num2ones = 0;

				for (; num2ones <= 9; num2ones++)
				{
					putchar(num1tens + '0');
					putchar(num1ones + '0');
					putchar(' ');
					putchar(num2tens + '0');
					putchar(num2ones + '0');

					if (!(num1tens == 9 && num1ones == 8 && num2tens == 9 && num2ones == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
