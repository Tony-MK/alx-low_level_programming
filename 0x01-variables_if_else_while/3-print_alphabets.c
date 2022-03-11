#include <stdio.h>
/**
 *  * main - Prints lower an upper case alphabets
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	c = 65;
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
