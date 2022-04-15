#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Displays all types of data
 * @format: String format
 */
void print_all(const char * const format, ...)
{
	register unsigned long int i = 0;
	va_list strings;
	char *string;

	va_start(strings, format);
	while (*(format + i))
	{
		if (i && (*(format + i) == 's' || *(format + i) == 'i' ||
			*(format + i) == 'f' || *(format + i) == 'c'))
		{
			printf(", ");
		}
		switch (*(format + i++))
		{
		case 's':
			string = va_arg(strings, char *);
			if (string == NULL)
				printf("(nil)");
				break;
			else
				printf("%s", string);
				free(string)
				break;

		case 'i':
			printf("%d", va_arg(strings, int));
			break;

		case 'f':
			printf("%f", va_arg(strings, double));
			break;

		case 'c':
			printf("%c", va_arg(strings, int));
			break;
		}
	}
	va_end(strings);
	printf("\n");
}
