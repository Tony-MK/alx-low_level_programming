#include <stdio.h>
/**
 *  * main - Prints all possible double digits integers combinations pairs
 *  *  * Return: 0 Always (sucess), otherwise failed
 */
int main(void)
{
	short int j, k, m;
	short int i = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				m = j;
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);

					if (i != 57 || j != 56 || k != 57 || m != 57)
					{
						putchar(',');
						putchar(' ');
						m++;
					}
					else
					{
						putchar('\n');
						return (0);
					}

				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
