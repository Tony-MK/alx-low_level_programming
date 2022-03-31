#include "main.h"
/**
 * * _puts_recursion - Prints string recursvly
 * * * @s: String to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar(0x0A);
}
