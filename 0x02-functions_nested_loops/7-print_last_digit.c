#include "main.h"

/**
 * * print_last_digit - Prints last digit of int
 * * * @n: The int used to get the last digit
 * * * * Return: The last digit of int
*/
int print_last_digit(int n)
{
	n = n < 0 ? -(-n % -10) : n % 10;
	_putchar(n + '0');
	return (n);
}
