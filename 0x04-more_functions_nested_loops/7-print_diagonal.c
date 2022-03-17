#include "main.h"
/**
* * print_diagonal - Prints a diagonal line of "\\" character in each line
* * * @n: Number of lines to print "\\" character
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		register int k, m = 0;

		while (n > m++)
		{
			k = m;
			while (--k)
				_putchar(0x20);
			_putchar(0x5C);
			_putchar(0x0A);
		}
	}
	else
		_putchar(0x0A);

}
