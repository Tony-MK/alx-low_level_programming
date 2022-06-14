/**
* * _strlen - Computes the length of the string
* * * @s: The string to get length
* * * * Return: The lenght of string s
*/
int _strlen(char *s)
{
	register int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
