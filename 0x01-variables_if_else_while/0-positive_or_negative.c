#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - Prints whether n is neg- or pos+
 *  *  * Return: 0 Always (sucess)
 */
int main(void)
{
	int n;
	char *t = "%d is %s\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(t, n, n == 0 ? "zero" : (n < 0 ? "negative" : "positive"));
	return (0);
}
