#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	register unsigned int l1 = s1 == NULL ? 0 : sizeof(s1) - 1;
	register unsigned int l2 = s2 == NULL ? 1 : sizeof(s2);
	register unsigned int l = l1 + (l2 > n ? n : l2);
	char *s;
	n = (l2 > n ? n : l2);
	if (l == 0)
		return ("");
	
	s = malloc(l);
	if (s == NULL)
		return (s);
	l -= 1;
	*(s + l) = 0;
	l -= 1;
	l -= n;
	while (n--)
		*(s + (l + n)) = *(s2 + n);

	while (l--)
		*(s + l) = *(s1 + l);

	return (s);
}
