#include "main.h"
/**
* * more_numbers - Prints numbers from 0-14 10 times
*/
void more_numbers(void)
{
	register unsigned short int n = 10;
	register unsigned short int d;

	while (n--)
	{
		d = 0;
		while (d < 15)
		{
			if (d > 9)
				_putchar(d / 10 + 0x30);
			_putchar(d % 10 + 0x30);
			d++;
		};
		_putchar(0x0A);
	}
}
