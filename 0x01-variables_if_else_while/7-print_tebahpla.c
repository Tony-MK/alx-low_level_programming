#include <stdio.h>
/**
 *  * main - Prints lower case alphabet in reverse
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
