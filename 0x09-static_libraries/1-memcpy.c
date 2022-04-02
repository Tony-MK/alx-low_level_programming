/**
 * *_memcpy - Copies memory area
 * * *@dest: Destination memory
 * * * *@src: Source memory
 * * * * *@n: How many bytes to copy
 * * * * * *Return: Pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	register unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
