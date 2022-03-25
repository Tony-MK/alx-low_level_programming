#include "main.h"
/**
* * print_number - Prints a number
* * * @n: Number to print
*/
void print_number(int n)
{
	register unsigned int p, t;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		p = 1;
		t = n;
		if (n < 0)
		{
			_putchar('-');
			t = -n;
		}
		while (p <= t)
			p *= 10;
		if (p > t)
			p /= 10;

		while (p > 0)
		{
			_putchar((t / p) % 10 + '0');
			p /= 10;
		}
	};
}
