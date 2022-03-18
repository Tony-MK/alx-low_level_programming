#include "_putchar.c"
/**
 *  * main - Prints the largest prime factor of "612852475143"
 *   * Return: Always 0.
*/
int main(void)
{
	register unsigned long d, p, x = 612852475143;

	d = 2;
	while (d < x)
	{
		if (x % d == 0)
		{
			x /= d;
			d = 2;

		}
		else
			d++;
	}

	p = 1;
	while (p <= x)
		p *= 10;

	if (p > x)
		p /= 10;

	while (p > 0)
	{
		_putchar(((int) x / p) % 10 + '0');
		p /= 10;
	}
	_putchar('\n');
	return (0);
}
