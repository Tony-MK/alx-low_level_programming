#include <stddef.h>
/**
 * * _strpbrk - Search a string for any of a set of bytes
 * * * @s: Pointer to the first char in the string
 * * * * @accept: Bytes to check
 * * * * * Return: Pointer to byte in s that matches of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	register unsigned int a, i = 0;

check:
	a = 0;
	while (*(accept + a) != 0)
	{
		if (*(s + i) == *(accept + a))
			return (s + i);
		a++;
	}
	if (*(s + i) != 0)
	{
		i++;
		goto check;
	}
	return (NULL);
}
