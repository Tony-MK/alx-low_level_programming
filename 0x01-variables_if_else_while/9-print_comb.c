#include <stdio.h>
/**
 *  * main - Prints all possible single digits int
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	short int n = 47;

	while (n < 57)
	{
		n++;
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
