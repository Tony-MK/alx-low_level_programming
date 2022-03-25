/**
* * strcat - Concatenates two strings
* * * @dest: First string
* * * * @src: Other string
*/
char *_strcat(char *dest, int *src)
{
	register int i = 0;
	register int l = 0;

	while (*(dest + l) != 0)
		l++;
	while (*(src + i++) != 0)
		*(dest + (len + i)) = *(src + i);
	return (dest);
}
