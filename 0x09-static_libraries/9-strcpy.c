#include "main.h"
#include "2-strlen.c"
/**
* * _strcpy - Prints second half of characters in a string
* * * @dest: The starting character pointer of the destination
* * * * @src: The starting character pointer of the source
* * * * * Return: The pointer of the destination string
*/
char *_strcpy(char *dest, char *src)
{
	register int length = _strlen(src);
	register int index = 0;

	while (index < length)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + length) = '\0';
	return (dest);
}
