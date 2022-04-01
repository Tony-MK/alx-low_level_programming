#include <stdio.h>
/**
 * main - Prints number of command line arguments
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
