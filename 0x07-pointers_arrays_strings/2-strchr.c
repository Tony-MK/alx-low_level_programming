#include <stddef.h>
/**
 * * _strchr - Finds char pointer which is equal to a certain character (c)
 * * * @s: Pointer first cahr in the string
 * * * * @c: Char to find in string
 * * * * * Return: Pointer with char from character c
 */
char *_strchr(char *s, char c)
{
	register unsigned int i = 0;

check:
	if (*(s + i) == c)
		return (s + i);
	else if (*(s + i++) != 0)
		goto check;
	return (NULL);
}
