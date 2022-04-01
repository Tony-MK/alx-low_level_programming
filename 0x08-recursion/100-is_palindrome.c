#include "2-strlen.c"
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
 * * is_palindrome - Checks if a string is a palindrome
 * * * @s: String to check it is a palindrome
 * * * * Return: 1 If s is a palindrome or empty string. Otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s){
		
	register int l = strlen(s);
	if (n > 2 && n % 2 != 0)
		return (is(n, 3));
	return (0);
}
