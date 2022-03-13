#include <stdio.h>
/**
 *  * main - Prints all possible double digits integers combinations pairs
 *  *  * Return: 0 Always (sucess), otherwise failed
 */
int main(void)
{
	short int j;
	short int i = 0;

	while (i < 100)
	{
		j = 1 + i;
		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			j++;
			if (i != 98 || j == 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
