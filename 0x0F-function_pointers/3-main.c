#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prefroms simple operations
 * @argc: Array of integers
 * @argv: Size of the array
 * Return: 0 (Sucess). Otherwise -1.
 */

int main(int argc, char **argv)
{
	register int (*func)(int, int);
	register int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (98);
	}
	func = get_op_func(*(argv + 2));
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
		return (99);
	}
	num2 = atoi(*(argv + 3));
	if (num2 == 0 && (**(argv + 2)  == '/' || **(argv + 2) == '%'))
	{
		printf("Error\n");
		exit(100);
		return (100);
	}
	num1 = atoi(*(argv + 1));
	printf("%d\n", func(num1, num2));
	return (0);
}
