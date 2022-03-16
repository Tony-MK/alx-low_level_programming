#include "main.h"
/**
* * print_to_98 - Prints on numbers until 98
* * * @n: Numbers to start printing from
*/
void print_to_98(int n)
{
	register int p, t;

	(n < 98 ? n-- : n++);
	while (n != 98)
	{
		(n < 98 ? n++ : n--);
		if (n == 0)
		{
			_putchar('0');
		}
		else
		{
			p = 1;
			t = n;
			if (t < 0)
			{
				_putchar('-');
				t = -t;
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
		if (n != 98)
		{
			_putchar(' ');
			_putchar(',');
		}
	}
	_putchar('\n');
}
