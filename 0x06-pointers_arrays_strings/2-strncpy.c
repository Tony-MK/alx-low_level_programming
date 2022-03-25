/**
* * _strncpy - Copies two strings starting from nth byte
* * * @dest: First string
* * * * @src: Other string
* * * * * @n: Starting btye index
* * * * * *Return: Char pointer to copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	register int d = 0;

	while (n > d && *(src + d))
	{
		*(dest + d) = *(src + d);
		d++;
	}

	while (n > d)
	{
		dest[d] = 0;
		d++;
	}

	return (dest);
}
