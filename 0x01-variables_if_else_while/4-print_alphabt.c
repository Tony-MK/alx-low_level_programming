#include <stdio.h>
/**
 *  * main - Prints lower case alphabet except q and e
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 97;

	while (c < 101)
	{
		putchar(c);
		c++;
	}
	c++;
	while (c < 123)
	{
		if (c != 113)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
