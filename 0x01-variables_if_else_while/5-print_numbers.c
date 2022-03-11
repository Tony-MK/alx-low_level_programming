#include <stdio.h>
/**
 *  * main - Prints single digits characters
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
	putchar('\n');
	return (0);
}
