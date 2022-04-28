/**
 * set_bit -  Set a bit to 1 of a given index
 * @n: Address of integer to get bit
 * @index: Position of the bit in the number
 *
 *  Return: 1 (Success). Otherwise, -1 (Failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(n))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
