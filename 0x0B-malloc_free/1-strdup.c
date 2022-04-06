#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - Creates a pointer the a newly space in memory from a string copy
 * @str: String
 * Return: A pionter to a char. Otherwise, NULL
 */
char *_strdup(char *str)
{
	register unsigned int len = 0;
	char *dup = NULL;

	while (*(str + len) != 0)
		len++;
	dup = malloc(len);
	if (dup != NULL)
	{
		while (--len)
			*(dup + len) = *(str + len);
	}
	*dup = *str;
	return (dup);
}
