
#include "main.h"
/**
* * print_to_98 - Prints on numbers until 98
* * * @n: Number to start int to add
*/
void print_to_98(int n)
{
	int i, p;

	while (n < 99)
	{
		i = n;
		if (i < 0)
		{
			_putchar('-');
			i = -i;
		}
		p = 1;
		while (!(p > n))
		{
			p *= 10;
		}
		while (p >= 10)
		{
			p /= 10;
			_putchar((i > 9 ? ((i / p) % 10) : i) + '0');
		}

		if (n < 98)
		{
			_putchar(' ');
			_putchar(',');
		}
		else
		{
			_putchar('\n');
		}
		n++;
	}

}
