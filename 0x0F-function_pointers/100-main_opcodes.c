#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prefroms simple operations
 * @argc: Array of integers
 * @argv: Size of the array
 * Return: 0 (Sucess). Otherwise -1.
 */

int main(int argc, char **argv)
{
	char name[] = "<main>:";
	register int n_bytes;
	register char c;
	register int n;
	FILE *file;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
		return (1);
	}

	n_bytes = atoi(*(argv++));

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
		return (2);
	}
	
	file = fopen("./main.s", "r");

	while (file == NULL)
	{
		system("objdump -d -j.text -M intel main > main.s");
		file = fopen("./main.s", "r");
	}
	
	c = fgetc(file);
	while (c != EOF)
	{
		c = fgetc(file);
		n = 0;
		while (c == *(name + n))
		{
			if (*(name + (++n)) == '\0')
			{
				while (c != EOF)
				{
					printf("%c", c);
				}
				fclose(file);
				return (0);
			}
		}
	}
	fclose(file);
	return (0);
}
