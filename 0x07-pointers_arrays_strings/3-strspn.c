/**
 * * _strspn - Compute the number of bytes of a prefix string
 * * * @s: Pointer first to the char in the string
 * * * * @accept: Range of bytes to match
 * * * * * Return: Length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	register unsigned int length = 0;
	char *temp = accept;

	while (*s++ != '\0')
	{
		while (*accept++ != '\0')
		{
			if (*(s - 1) == *(accept - 1))
			{
				length++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = temp;
	}
	return (length);
}
