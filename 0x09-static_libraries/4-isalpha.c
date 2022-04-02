/**
 * * _isalpha - Checks if the character is an alphabet
 * * * @c: The character to check if is an alphabet
 * * * * Return: 1 if c is lower or upper. Otherwise, 0 if c is not an alphabet
*/
int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
