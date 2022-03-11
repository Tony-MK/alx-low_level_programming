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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %s\n", n , (n < 0 ? "negative" : "postive"));
	return(0);
}
