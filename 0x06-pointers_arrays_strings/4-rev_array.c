/**
* * reverse_array - Reverses an array of ints
* * * @a: An arry of int
* * * * @n: Size of array
*/
void reverse_array(int *a, int n)
{
	register int i = 0;
	register int t;

	n--;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
