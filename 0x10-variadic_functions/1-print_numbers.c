#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Displays integers
 * @separator: String to separate printed integers
 * @n: Number of integer arguments
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	register unsigned int index = 0;
	va_list numbers;

	if (n > 0)
	{
		va_start(numbers, n);
		while (n > index++)
		{
			printf("%d", va_arg(numbers, int));
			if (n > index && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(numbers);
	}
	printf("\n");
}
