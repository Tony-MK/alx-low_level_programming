#include <stdio.h>
/**
 *  * main - Prints lower case alphabet except q and e
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 96;

	while (c < 122)
	{
		c++;
		if (c != 101 && c != 113)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}
