/**
* * _isdigit - Checks if ASCII character is a digit
* * * @c: ASCII character to check
* * * * Return: 1 If is a digit 0 Otherwise.
*/
int _isdigit(int c)
{
	return (c > 47 && c < 59 ? 1 : 0);
}
