#include <stdio.h>
/**
 *  * main - Prints all possible double digits integers combinations pairs
 *  *  * Return: 0 Always (sucess)
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
				m = 48;
				while (m < 57)
				{
					m++;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);

					if (i != 57 || j != 56 || k != 57 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}

				}

				k++;
			}

			j++;
		}

		i++;
	}
	putchar('\n');
	return (0);
}
