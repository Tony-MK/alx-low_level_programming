/**
* * leet - Reverses an array of ints
* * * @s: String
* * * * Return: Size of array
*/
char *leet(char *s)
{
	char uc[5] = {'A', 'E', 'O', 'T', 'L'};
	char lc[5] = {'a', 'e', 'o', 't', 'l'};
	int num[5] = {4, 3, 0, 7, 1};
	int n, i = 0;

	while (*(s + i) != 0)
	{
		n = 0;
		while (n < 6)
		{
			if (*(s + i) == uc[n] || *(s + i) == lc[n])
			{
				*(s + i) = '0' + num[n];
			}
			n++;
		}
		i++;
	}
	return (s);
}
