#include "main.h"
/**
 * print_binary - Prints the binary representation of an integer
 * @n: An unsigned long integer
 */
void print_binary(unsigned long int n)
{
	register unsigned char bit, least = 0x0, nth_bit = 17;

	while (nth_bit--)
	{
		bit = (n & (1 << nth_bit));
		if (least || bit || !nth_bit)
		{
			_putchar(bit ? '1' : '0');
			least = 1;
		}
	}
}
