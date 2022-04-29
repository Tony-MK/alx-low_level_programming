/**
 * get_endianness - Checks the system endianness
 *  Return: 0 f big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *)&x));
}
