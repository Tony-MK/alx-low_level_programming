#include "main.h"
#include <stdio.h>
/**
* * print_array - Prints array of int
* * * @a: The starting int in the array
* * * * @n: The lenght of the array
*/
void print_array(int *a, int n)
{
	register int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		printf("%s", (i < n) ? ", " : "\n");
	};
}
