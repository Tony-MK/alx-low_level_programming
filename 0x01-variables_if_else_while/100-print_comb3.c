#include <stdio.h>
/**
 *  * main - Prints all possible double digits integers
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	short int i = 47;
	short int j = 47;

	while (i < 57)
	{
		i++;
		j = i;
		while (j < 57)
		{
			j++;
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
