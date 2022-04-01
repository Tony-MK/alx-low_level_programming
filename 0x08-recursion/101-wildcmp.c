/**
 * * wildcmp - Compares if two string are "indentical"
 * * * @s1: String pointer
 * * * *@s2: String pointer
 * * * * Return: 1 If s1 and s2 are "indentical". Otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1)
	{
		if (*s2 == '*')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		else if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		return (0);
	}
	else if (*s2 == '*' && *s2 != '\0')
		return (wildcmp(s1, s2 + 1));
	return (*s2 == '\0');
}
