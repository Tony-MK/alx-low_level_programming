#include <stdio.h>
/**
 * main - Prints name of the excutable file
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
