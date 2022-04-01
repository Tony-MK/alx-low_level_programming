#include "print.c"
/**
 * main - Prints number of command line arguments
 * @argc : Number of agruments
 * @argv : String arguments
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	print_int(argc - 1);
	_putchar(0x0A);
	return (0);
}
