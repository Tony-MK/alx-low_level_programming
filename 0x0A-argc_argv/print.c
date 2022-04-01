#include "_putchar.c"

void print_unint(unsigned int unint)
{
	if (unint / 10)
		print_unint(unint / 10);
	_putchar(unint % 10 + '0');
}
/**
 * _putint - Prints an integer
 * @n:
 * Return: Number of characters printed
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar(0x2D);
		n = -n;
	}
	print_unint((unsigned int) n);
}
