#include "_putchar.c"
/**
 * main - Prints FizzBuzz
 * *
 * * * Return: Always 0.
 */
int main(void)
{
	register unsigned short int n = 1;
	register unsigned short p = 0x0;

start:
	p = 0x00;
	if (n % 3 == 0)
	{
		_putchar(0x46);
		_putchar(0x69);
		_putchar(0x7A);
		_putchar(0x7A);
		p = 0x1;
	};
	if (n % 5 == 0)
	{
		_putchar(0x42);
		_putchar(0x75);
		_putchar(0x7A);
		_putchar(0x7A);
		p = 0x1;
	};
	if (p == 0x0)
	{
		if (n > 9)
			_putchar(n / 10 + 0x30);
		_putchar(n % 10 + 0x30);
	}
	if (n < 100)
	{
		n++;
		_putchar(0x20);
		goto start;
	};
	_putchar(0x0A);
	return (0);
}
