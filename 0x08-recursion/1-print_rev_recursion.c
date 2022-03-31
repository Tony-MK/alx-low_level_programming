#include "main.h"
/**
 * * _print_rev_recursion - Prints string in reverse recursively
 * * * @s: String to print
 */
void _puts_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(++s);
		_putchar(*s);
	}	
}
