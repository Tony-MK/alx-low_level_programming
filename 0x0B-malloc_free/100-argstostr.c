#include <stddef.h>
#include "2-str_concat.c"
#include "1-strdup.c"
/**
 * argtostr - Concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Arguments vector
 * Return: A pionter to a char. Otherwise, NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = _strdup(*av);
	if (str == NULL)
		return (NULL);
concat:
	if (!(ac--))
		return (str);
	
	temp = str_concat(str, *(av++));
	free(str);
	if (temp == NULL)
		return (NULL);

	str = temp;
	temp = str_concat(str, "\n");
	free(str);
	if (temp == NULL)
		return (NULL);
	str = temp;
	goto concat;
}
