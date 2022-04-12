#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Prints the name of the file
 * Return: 0 (Always)
 */
int main(void)
{
	char *s = __FILE__;

	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
