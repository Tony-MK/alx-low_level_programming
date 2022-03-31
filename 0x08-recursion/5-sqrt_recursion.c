/**
 * * compute_sqrt - Compute factorial of an integer
 * * @n: Integer to get the square root
 * * @d: Square root strating integer
 * * Return: A positive integer. Otherwise 1, if the square root is invalise
 */
int compute_sqrt(int n, int d)
{
	register int p = d * d;

	if (p < n)
		return (compute_sqrt(n, ++d));
	else if (p == n)
		return (d);
	return (-1);
}
/**
 * * _sqrt_recursion - Computes the square root of an integer
 * * * @n: Integer to compute square root
 * * * * Return: A positive integer. Otherwise -1 If the square root is invalid
 */
int _sqrt_recursion(int n)
{

	if (n > 3)
		return (compute_sqrt(n, 3));
	return (-1);
}
