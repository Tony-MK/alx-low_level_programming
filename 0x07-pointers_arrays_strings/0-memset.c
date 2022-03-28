/*
 * _memset - Fills memory with a constant bytes
 * @s: 
 * @b: 
 * @n:
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
