/**
* * _strlen - Computes the length of the string
* * * @s: The string to get length
* * * * Return: The lenght of string s
*/
int _strlen(char *s)
{
	register int n = -1;

	while (*(s + n++) != '\0')
		;
	return (n);
}
