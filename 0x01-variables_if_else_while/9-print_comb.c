#include <stdio.h>
/**
 *  * main - Prints all possible single digits int
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	char c = 47;

	while (c < 57)
	{
		c++;
		putchar(c);
		if (c != 57){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
