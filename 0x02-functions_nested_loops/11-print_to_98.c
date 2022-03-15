#include "main.h"
/**
* * print_to_98 - Prints on numbers until 98
* * * @n: Number to start int to add
*/
void print_to_98(int n)
{
	int i;

	while (n < 99)
	{
		i = n;
		if (i < 0)
		{
			_putchar('-');
			i = -i;
		}

		if (i < 9)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
		n++;
	}

}
