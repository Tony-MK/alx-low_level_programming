#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - Prints out last digit
 *   * Return: 0 Always (sucess)
 */
int main(void)
{
	int n;
	char *a = " and is 0\n";
	char *b = " and is greater than 5\n";
	char *c = " and is less than 6 and not 0\n";
	char *s = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s%d is %d%s", s, n, n % 10, n % 10 == 0 ? a : (n % 10 > 5 ? b : c));
	return (0);
}
