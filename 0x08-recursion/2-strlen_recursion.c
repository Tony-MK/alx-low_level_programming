#include "main.h"
/**
 * * _strlen_recursion - Computes length of a string
 * * * @s: Pointer to the first char in a string
 * * * * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (*++s ? _strlen_recursion(s) + 1 : 1);
	return (0);
}
