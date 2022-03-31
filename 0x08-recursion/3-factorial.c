#include "main.h"
/**
 * * factorial - Compute factorial of an integer
 * * * @n: Integer to compute factorial
 * * * * Return: A positive integer. Otherwise, -1 If n is lower than 0
 */
int factorial(int n)
{
	if (n < 2)
		return (n < 0 ? -1 : 1);
	return (n * factorial(n - 1));
}
