/**
 * get_bit -  Gets the value of a bit at a given index
 * @n: Integer to get bit
 * @index: Position of the bit in the number
 *
 *  Return: Value of bit, 0 or 1. Otherwise, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n & (1 << index) ? 1 : 0);
}
