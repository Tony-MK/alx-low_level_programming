#include "main.h"
/**
 * * _pow_recursion - Compute factorial of an integer
 * * * @x: Base integer
 * * * * @y: Power integer
 * * * * Return: A positive integer. Otherwise, -1 If n is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
