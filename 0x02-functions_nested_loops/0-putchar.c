int _putchar(char c);
/**
 * * main - Prints "_putchar"
 *  *  * Return: Always 0 (success)
*/
int main(void)
{
	char *s = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(*(s + i));
		i++;
	}
	return (0);
}
