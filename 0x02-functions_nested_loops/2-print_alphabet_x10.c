#include <stdio.h>
/**
 * * print_alphabet_x10 - Prints the alphabet in lower case ten times
*/
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 97;

		while (i < 123)
		{
			putchar(i);
			i++;
		};
		putchar('\n');
		n++;
	}
}
/**
 * * main - Calls print_alphabet_x10 function
 *  *  * Return: Always 0 (success)
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
