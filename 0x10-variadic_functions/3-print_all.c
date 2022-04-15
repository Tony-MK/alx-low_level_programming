#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Displays all types of data
 * @format: String format
 */
void print_all(const char * const format, ...)
{
	register unsigned long int i = 0;
	register char c = 0;
	va_list strings;
	char *string;

	va_start(strings, format);
	while (*(format + i))
	{
		if ((c == 1) && (*(format + i) == 's' || *(format + i) == 'i' ||
			*(format + i) == 'f' || *(format + i) == 'c'))
			printf(", ");
		switch (*(format + i++))
		{
		case 's':
			c = 1;
			string = va_arg(strings, char *);
			if (string)
				printf("%s", string);
			else
				printf("%p", string);
			break;

		case 'i':
			c = 1;
			printf("%d", va_arg(strings, int));
			break;

		case 'f':
			c = 1;
			printf("%f", va_arg(strings, double));
			break;

		case 'c':
			c = 1;
			printf("%c", va_arg(strings, int));
			break;
		}
	}
	va_end(strings);
	printf("\n");
}
