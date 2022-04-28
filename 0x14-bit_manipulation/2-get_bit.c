/**
 * get_bit -  Gets the value of a bit at a given index
 * @n: Address of integer to get bit
 * @index: Position of the bit in the number
 *
 *  Return: Value of bit, 0 or 1. Otherwise, -1 if an error occured
 */
int get_bit(unsigned long int *n, unsigned int index)
{
	if (!(n))
		return (-1);
	return (*n & (1 << index ? 1 : 0);
}
