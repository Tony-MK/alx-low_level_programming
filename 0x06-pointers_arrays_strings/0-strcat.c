/**
* * strcat - Concatenates two strings
* * * @dest: First string
* * * * @src: Other string
* * * * * Return: Char pointer to concatenated string
*/
char *_strcat(char *dest, char *src)
{
	register int s = 0;
	register int d = 0;

	while (*(dest + d))
		d++;
	while (*(src + s))
	{
		*(dest + d) = *(src + s);
		s++;
		d++;
	}

	return (dest);
}
