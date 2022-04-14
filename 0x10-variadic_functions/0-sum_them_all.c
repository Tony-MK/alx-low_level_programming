#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of postive integers
 * @n: Integers
 * Return: Sum of all integers given
 */

int sum_them_all(const unsigned int n, ...)
{
	register unsigned int index;
	register int sum;
	va_list numbers;

	if (n == 0)
		return (0);
	sum = 0;
	index = 0;
	va_start(numbers, n);
	while (n > index++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
