#include "main.h"
/**
* * _puts - Prints a string to the standard output
* * * @str: The starting character pointer of a string
*/
void _puts(char *str)
{
	register unsigned int i = 0x0;

	while (*(str + i) != 0x0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(0x0A);
}
