#include <stddef.h>
/**
 * * _strstr - Locates a substring
 * * * @haystack: String to search 
 * * * * @needle: Substring to locate
 * * * * * Return: Pointer to the cahr of string at first occurence of haystack
 */
char *_strstr(char *haystack, char *needle)
{
	if (*(needle + 0) == '\0')
		return (haystack);

	register unsigned int h = 0, n, i;

check:
	n = 0;
	i = h;
	while (*(haystask + i) != 0)
	{
		if ((haystack + i) != *(needle + n))
		{
			i++;
			goto check;
		}
		
		n++;
		if (*(needle + n) == 0)
			return (haystask + h);
	}
	return (NULL);
}
