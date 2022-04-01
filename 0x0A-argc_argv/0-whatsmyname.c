#include "_putchar.c"
/**
 * main - Prints name of the excutable file
 * @argc : Number of agruments
 * @argv : String arguments
 * Reutrn - Always 0
 */
int main(int argc, char* argv[])
{
	if (argc == 0)
		return (0);
start:
	_putchar(**argv);
	if (*(*argv)++)
		goto start;
	_putchar(0x0A);
	return (0);
}
