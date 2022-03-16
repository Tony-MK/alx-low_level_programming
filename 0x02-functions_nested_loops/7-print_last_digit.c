#include "main.h"

/**
 * * print_last_digit - Prints last digit of int
 * * * @n: The int used to get the last digit
 * * * * Return: The last digit of int
*/
int print_last_digit(int n)
{
	int r = n % 10;
	_putchar(r + '0');
	return (r);
}
