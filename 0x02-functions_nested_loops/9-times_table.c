#include "main.h"
/**
 * * times_table - Prints 9 by 9 time table
*/
void times_table(void)
{
	int r = 0;
	int c = 0;
	int n = 0;
	while(r < 10)
	{
		while(c < 10)
		{
			n = r * c;
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			c++;
			if (c < 10){
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		r++;
		c = 0;
	}
}
