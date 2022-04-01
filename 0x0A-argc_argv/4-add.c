#include <stdlib.h>
#include <stdio.h>
/**
 * main - Displays the sum of positive two numbers
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc  __attribute__((unused)), char **argv)
{
	register unsigned int nchar, sum = 0;
root:
	argc--;
	if (argc)
	{
		argv++;
		nchar = 0;
		while (*(*argv + nchar++))
		{
			if ((48 > *(*argv + nchar)) || (*(*argv + nchar) >  57))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(*argv);
		goto root;
	}
	printf("%d\n", sum);
	return (0);
}
