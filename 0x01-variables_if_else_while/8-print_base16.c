#include <stdio.h>
/**
 *  * main - Prints base 16 in lowercase
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	c = 97;
	while (c < 105)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
