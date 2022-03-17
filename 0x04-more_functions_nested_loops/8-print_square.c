#include "main.h"
/**
* * print_square - Prints a square using the hashtag character '#' (0x23)
* * * @size: The width and height of the square to print
*/
void print_square(int size)
{
	if (size > 0)
	{
		register int height = size;
		register int width = size;

		while (height--)
		{
			while (width--)
				_putchar(0x23);
			_putchar(0x0A);
			width = size;
		}
	}
	else
		_putchar(0x0A);
}
