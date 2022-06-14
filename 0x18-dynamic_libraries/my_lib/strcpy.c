/**
 * _strcpy - Prints second half of characters in a string
 * @dest: The starting character pointer of the destination
 * @src: The starting character pointer of the source
 * Return: The pointer of the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	
	while (*(src + length))
		;

	while (length--)
		*(dest + length) = *(src + length);
	
	return (dest);
}
