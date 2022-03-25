/**
* * cap_string - Capitialize for every single word
* * * @s: String input
* * * * Return: The capitialized string
*/
char *cap_string(char *s)
{
	register int i = 0;
	register char c;

	while (*(s + i) != 0)
	{

		c = *(s + i - 1);
		if (*(s + i) > 96 && *(s + i) < 122)
		{
			if (i == 0)
				*(s + i) -= 32;

			if (c == 32 || c == 9 || c == 10 || c == 33 ||
				c == 40 || c == 44 || c == 46 ||
				c == 59 || c == 63 || c == 34 ||
				c == 41 || c == 123 || c == 124)
				*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
