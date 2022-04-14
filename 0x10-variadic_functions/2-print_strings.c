#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Displays strings on the screen
 * @separator: String to separate printed strings
 * @n: Number of integer arguments
 */
void print_strings(char *separator, const unsigned int n, ...)
{
	register unsigned int index = 0;
	va_list strings;
	char *string;

	if (n > 0)
	{
		va_start(strings, n);
		while (n > index++)
		{
			string = va_arg(strings, char *);
			printf("%s", string ? string : "(nil)");
			if (n > index && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(strings);
	}
	printf("\n");
}
