#include <stddef.h>
#include <stdlib.h>
/**
 * str_length - Comptues length of a string
 * @str: A pointer to the first char of the string
 * Return: The length of the string
 */
unsigned long int str_length(char *str)
{
	register unsigned long int length = 0;

	while (*(str++))
		length++;
	return (length);
}
/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: A pionter to a char. Otherwise, a NULL pionter
 */
char *str_concat(char *s1, char *s2)
{
	register unsigned long int l1 = str_length(s1);
	register unsigned long int l2 = str_length(s2);
	register unsigned long int i = 0;
	char *s = malloc(l1 + l2 + 1);

	if (s != NULL)
	{
		*(s + (l1 + l2)) = 0x00;
		while (i < l1)
		{
			*(s + i) = *(s1 + i);
			i++;
		}
		i = 0;
		while (i < l2)
		{
			*(s + (l1 + i)) = *(s2 + i);
			i++;
		}
	}
	return (s);
}
