#include <stdio.h>
/**
 * main - Displays the command line arguments
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
print:
	printf("%s\n", *argv);
	argc--;
	if (argc > 0)
	{
		argv++;
		goto print;
	}
	return (0);
}
