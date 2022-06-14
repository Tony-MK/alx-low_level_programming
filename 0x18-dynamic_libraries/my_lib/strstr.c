#include <stddef.h>
/**
 * * _strstr - Locates a substring
 * * * @haystack: String to search
 * * * * @needle: Substring to locate
 * * * * * Return: Pointer to the cahr of string at first occurence of haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, h = 0, n;

	if (*(needle + 0) == '\0')
		return (haystack);
check:
	n = 0;
	i = h;
	while (*(haystack + i) != 0)
	{
		if (*(haystack + i) != *(needle + n))
		{
			h++;
			goto check;
		}
		n++;
		i++;
		if (*(needle + n) == 0)
			return (haystack + h);
	}
	return (NULL);
}
