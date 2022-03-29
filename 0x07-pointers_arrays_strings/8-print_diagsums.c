#include "main.h"
#include <stdio.h>
/**
 * * print_diagsums - Print diagonal sums
 * * * @a: Potiner to a square martix
 * * * * @size: The size of the array
 */
void print_diagsums(int *a, int size)
{
	int r = 0;
	int c1 = 0;
	int c2 = size - 1;
	int s1 = 0;
	int s2 = 0;

	while (r < size)
	{
		s1 += *(a + r * size + c1);
		s2 += *(a + r * size + c2);
		r++;
		c1++;
		c2--;
	}
	printf("%d, %d\n", s1, s2);
}
