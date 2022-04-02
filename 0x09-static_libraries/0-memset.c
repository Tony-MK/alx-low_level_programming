/**
 * *_memset - Fills memory with a constant bytes
 * * *@s: Pointer to char
 * * * *@b: Constant byte
 * * * * *@n: Stop index in s
 * * * * * *Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	register unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
