#include <stdio.h>
/**
 *  * main - Prints lower cae alphabet
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	short int n = 48;

	while (n < 58)
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
