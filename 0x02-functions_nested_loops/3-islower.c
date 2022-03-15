/**
 * * _islower - Checks if the character lower case
 * * * @c: The character to check if is lower case
 * * * * Return: 1 if c is lower. Otherwise, 0 if c upper or not an alphabet
*/
int _islower(int c)
{
	return (c > 64 && c < 83 ? 0 : 1);
}
