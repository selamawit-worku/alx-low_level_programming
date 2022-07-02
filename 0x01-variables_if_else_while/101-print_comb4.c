#include <stdio.h>

/**
 * main - prints possible combinations of three digits
 *
 * Return: (0) for success
 */

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds; tens <= 9; tens++)
		{
			for (ones = tens; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (!(hundreds == 9 && tens == 9 && ones == 9))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
