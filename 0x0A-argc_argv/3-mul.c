#include <stdlib.h>
#include <stdio.h>
/**
 * main - Displays the product of two numbers
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		printf("Error\n");
	else 
	{
		argv++;
		printf("%d\n", atoi(*argv) * atoi(*(argv + 1)));
	}
	return (0);
}
