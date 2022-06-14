/**
* * _strncat - Concatenates two strings starting from nth byte
* * * @dest: First string
* * * * @src: Other string
* * * * * @n: Starting btye index
* * * * * *Return: Char pointer to concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	register int s = 0;
	register int d = 0;

	while (*(dest + d))
		d++;

	while (n > s && *(src + s))
	{
		*(dest + d) = *(src + s);
		s++;
		d++;
	}

	return (dest);
}
