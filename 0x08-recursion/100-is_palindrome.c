#include "2-strlen_recursion.c"
/**
 * * _is_palindrome - Compute factorial of an integer
 * * * @s: A pointer to the starting char of the string
 * * * * @l: The index of the last char
 * * * * Return: 1 If string is a palindrome. Otherwise 0
 */
int _is_palindrome(char *s, int l)
{
	if (l < 1)
		return (1);
	else if (*s == *(s + l))
		return (_is_palindrome(s + 1, l - 2));
	return (0);
}
/**
 * * is_palindrome - Checks if a string is a palindrome
 * * * @s: String to check it is a palindrome
 * * * * Return: 1 If s is a palindrome or empty string. Otherwise 0
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l > 1)
		return (_is_palindrome(s, l - 1));
	return (l == 0 ? 1 : 0);
}
