#include "main.h"
/**
* * print_triangle - Prints a triangle using the hashtag character '#' (0x23)
* * * @size: The height of the triangle to print
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		register int hashtags, spaces;
		register int height = 0;

		while (height < size)
		{
			height++;
			hashtags = height;
			spaces = size - height;
			while (spaces > 0)
			{
				_putchar(0x20);
				spaces --;
			}
			while (hashtags--)
				_putchar(0x23);
			_putchar(0x0A);
		}
	}
	else
		_putchar(0x0A);
}
