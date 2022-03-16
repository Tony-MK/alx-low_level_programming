#include "main.h"
/**
 * * times_table - Prints 9 by 9 time table
*/
void times_table(void)
{
	unsigned short int c, n;
	unsigned short int r = 0x0;

	while (r < 10)
	{
		c = 0x00;
		while (c < 10)
		{
			if (c == 0)
			{
				_putchar('0');
			}
			else
			{
				n = r * c;
				if (n < 10)
				{
					_putchar(' ');
					_putchar(n + '0');
				}
				else
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
