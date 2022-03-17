#include "main.h"
/**
* * print_numbers - Prints numbers from 0 to 9
*/
void print_numbers(void)
{
	register unsigned short int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
