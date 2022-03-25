/**
* * strcat - Concatenates two strings
* * * @dest: First string
* * * * @src: Other string
* * * * * Return: Char pointer to concatenated string
*/
char *string_toupper(char *s)
{
	register unsigned short int i = 0;
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) > 97 && *(s + i) < 123)
		{
			*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
