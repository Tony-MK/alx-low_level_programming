/**
* * _isupper - Checks if ASCII character is an upper case alphabet
* * * @c: ASCII character to check
* * * * Return: 1 If c is an upper case alphabet. 0 Otherwise.
*/
int _isupper(int c)
{
	return (c > 64 && c < 91 ? 1 : 0);
}
