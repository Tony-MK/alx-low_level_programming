#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	register unsigned int l = s1 == NULL ? 0 : sizeof(s1) - 1;
	register unsigned int l2 = s2 == NULL ? 0 : sizeof(s2) - 1;
	char *str; 
	
	if (n > l2)
		n = l2;

	l += n;
	if (l == 0)
		return ("");
	
	str = malloc(l + 1);
	if (str == NULL)
		return (str);

	*(str + l) = 0;
	l -= n;
	while (n--)
		*(str + (l + n)) = *(s2 + n);

	while (l--)
		*(str + l) = *(s1 + l);

	return (str);
}
