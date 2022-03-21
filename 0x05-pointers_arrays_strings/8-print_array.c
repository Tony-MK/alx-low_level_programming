#include "main.h"
#include "2-strlen.c"
/**
* * puts_half - Prints second half of characters in a string
* * * @str: The starting character pointer of a string
*/
void puts_half(char *str)
{
	register unsigned int length = (unsigned int)  _strlen(str);
	register unsigned int index = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	while (index < length)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar(0x0A);
}
