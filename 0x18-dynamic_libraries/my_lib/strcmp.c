/**
* * _strcmp - Compares two strings
* * * @dest: First string
* * * * @src: Other string
* * * * * Return: Difference in first character which is not equal
*/
int _strcmp(char *dest, char *src)
{
	register int d = 0;
	register int s = 0;

	while (s == 0 && *(dest + d) && *(src + d))
	{
		s = *(dest + d) - *(src + d);
		d++;
	}
	return (s);
}
