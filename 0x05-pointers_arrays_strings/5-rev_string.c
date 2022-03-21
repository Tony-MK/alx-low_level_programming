#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
* * rev_string - Reverses a string array
* * * @s: The starting character pointer of a string array
*/
void rev_string(char *s)
{
	register int len = _strlen(s);
	register char *str = (char *) malloc(len);
	register int index = 0;

	while (index < len)
	{
		*(str + (len - 1 - index)) = *(s + index);
		index++;
	}

	while (len--)
		*(s + len) = *(str + len);
}
