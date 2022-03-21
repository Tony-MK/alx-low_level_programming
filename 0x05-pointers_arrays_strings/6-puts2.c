#include "main.h"
#include "2-strlen.c"
/**
* * puts2 - Prints every other character of a string
* * * @str: The starting character pointer of a string
*/
void puts2(char *str)
{
	register int length = _strlen(str);
	register int index = 0x00;

	while (index < length)
	{
		_putchar(*(str + index));
		index = index + 2;
	}
	_putchar(0x0A);
}
