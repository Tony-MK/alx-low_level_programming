#include<unistd.h>
/**
 *  *  *  * main - Prints the last part of the quote
 *    *  *  * Return: 1 when finshed
 */
int main(void)
{
	char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	return (write(1, c, 59) == 59 ? 1 : 0);
}
