/**
 * * has_product - Compute factorial of an integer
 * * * @n: Integer to check if n is prime number
 * * * * @i: Divider
 * * * * Return: 0 If n has poduct with no reminder. Otherwise 1
 */
int has_product(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (n / 2 > i)
		return (has_product(n, i + 2));
	return (1);
}
/**
 * * is_prime_number - Checks if n is a prime number
 * * * @n: Integer to check
 * * * * Return: 1 If n is prime number. Otherwise 0
 */
int is_prime_number(int n)
{

	if (n > 2 && n % 2 != 0)
		return (has_product(n, 3));
	return (0);
}
