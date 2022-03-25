/**
* * string_toupper - Capitalizes string
* * * @s: String to capitalize
* * * * Return: Char pointer to capatilized string
*/
char *string_toupper(char *s)
{
	register unsigned short int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) > 96 && *(s + i) < 123)
		{
			*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
