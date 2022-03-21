#include "main.h"
#include "2-strlen.c"
/**
* * print_rev - Prints a string to the standard output in reverse
* * * @s: The starting character pointer of a string
*/
void print_rev(char *s)
{
	register int l = _strlen(s);

	while (l--)
	{
		_putchar(*(s + l));
		
	}
	_putchar(0x0A);
}
