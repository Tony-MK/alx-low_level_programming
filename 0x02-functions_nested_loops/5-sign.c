#include "main.h"
/**
 * * print_sign - Prints integer sign
 * * * @n: The integer to print sign
 * * * * Return: 1 if n is postive, -1 if n is negative, otherwise 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
