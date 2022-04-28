/**
 * flip_bits - Computes the number of bits flipped when converting two integers
 * @n: Integer one
 * @m: Integer two
 *
 *  Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	register unsigned char flips = 0, size = sizeof(n) << 3;

	while (size--)
	{
		if ((n & 1) != (m & 1))
			flips++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
