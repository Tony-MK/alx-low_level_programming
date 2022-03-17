#include "main.h"
/**
* * print_line - Prints a row of "_" character(s)
* * * @n: Number of "_" characters to print
*/
void print_line(int n)
{
start:

	if (n > 0)
	{
		n--;
		_putchar(0x5F);
		goto start;
	}
	_putchar(0x0A);
}
