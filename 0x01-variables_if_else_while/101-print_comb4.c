#include <stdio.h>
/**
 *  * main - Prints all possible double digits integers
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	short int i = 47;
	short int j, k;

	while (i < 57)
	{
		i++;
		j = i;
		while (j < 57)
		{
			j++;
			k = j;
			while (k < 57)
			{
				k++;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
