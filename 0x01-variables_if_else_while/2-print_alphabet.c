#include <stdio.h>
/**
 *  * main - Prints lower case alphabets
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
	putchar('\n');
	return (0);
}
