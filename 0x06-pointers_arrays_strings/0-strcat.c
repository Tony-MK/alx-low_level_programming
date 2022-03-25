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

	while (*(dest + d) != 0)
		d++;
	d++;
	while (*(src + s) != 0)
	{
		*(dest + (d + s)) = *(src + s);
		s++;
	}
	*(dest + (d + s)) = 0;
	return (dest);
}
