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
	_putchar(*(*(a + i1) + i2));

	i2++;
	if (i2 > 7)
	{
		i2 = 0;
		i1++;
		_putchar('\n');
	}
	if (i1 < 8)
		goto print;

}
