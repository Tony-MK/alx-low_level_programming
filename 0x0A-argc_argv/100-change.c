#include <stdlib.h>
#include <stdio.h>
/**
 * main - Displays the min amount of coins of given change
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc  __attribute__((unused)), char **argv)
{
	int coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	argv++;
	change = atoi(*argv);
	coins = 0;
root:
	if (change > 0)
	{
		coins += 1;
		if (change > 24)
			change -= 25;
		else if (change > 9)
			change -= 10;
		else if (change > 4)
			change -= 5;
		else if (change > 1)
			change -= 2;
		else
			change -= 1;
		goto root;
	}
	printf("%d\n", coins);
	return (0);
}
