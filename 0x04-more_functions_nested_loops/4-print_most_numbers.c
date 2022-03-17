#include "main.h"
/**
* * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
*/
void print_most_numbers(void)
{
	register unsigned short int c = 48;

	while (c < 58)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
