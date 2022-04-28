/**
 * clear_bit -  Set the value of a bit to 1 at a given index
 * @n: Address of integer to get bit
 * @index: Position from 0, of the bit in the number to set
 *
 *  Return: 1 (Success). Otherwise, -1 (Failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!(n) || ((sizeof(n) << 3) < index))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
