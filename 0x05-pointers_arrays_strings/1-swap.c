/**
* * swap_int - Swapping values of two number
* * * @a: First number
* * * * @b: Second number
*/
void swap_int(int *a, int *b)
{
	int temp_int = *a;
	*a = *b;
	*b = temp_int;
}
