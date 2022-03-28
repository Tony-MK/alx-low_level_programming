#include "main.h"
/**
 * * print_chessboard - Print chess board
 * * * @a: 2-D Array of characters
 */
void print_chessboard(char (*a)[8])
{
	int i1 = 0;
	int i2 = 0;

print:
	_putchar(*(*(i1 + a) + i2));
	if (i1 < 8)
	{
		i2 = i2 == 7 ? 0 : i2 + 1;
		if (i2 == 0)
		{
			i1++;
			_putchar('\n');
		}
		goto print;
	}
}
