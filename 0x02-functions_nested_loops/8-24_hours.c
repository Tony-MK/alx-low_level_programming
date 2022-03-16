#include "main.h"
/**
* * jack_bauer - Prints 24 Hours in format %H:%M
*/
void jack_bauer(void)
{
	int h, m;
	int n = 0;

	while (n < 1440)
	{
		h = n / 60;
		m = n % 60;
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');
		n++;
	}

}
