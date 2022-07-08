#include "main.h"

/**
 * print_number - print number
 * @n: the input number to be printed
 * Return: void
 */

void print_number(int n)
{
	int c, nth, size = 1, ones = n % 10;

	n /= 10;
	c = n;
       if (ones < 0)
       {
	       ones *= -1; 
	       c *= -1;
	       n *= -1;
	       _putchar('-');
       }
       if(c > 0)
       {
	       while (c / 10 != 0)
	       {
		       c /= 10;
		       size *= 10;
	       }
	       while (size > 0)
	       {
		       nth = n / size;
		       _puthchar('0' + nth);
		       n -= nth * size;
		       size /= 10;
	       }
       }
       _putchar('0' + ones);
}
