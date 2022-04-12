#include "_putchar.c"
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
