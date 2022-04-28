/**
 * binary_to_uint - Converts a binary string to unsigned integer
 * @b: Binary integer as a string
 *
 * Return: Converted number. 0, If b is NULL or one or more chars is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	register unsigned int exp, num, len;

	if (!b)
		return (0x0);
	len = 0x00;
	while (*(b + len))
	{
		if (*(b + len) != 0x30 && *(b + len) != 0x31)
			return (0x0);
		len++;
	}

	num = 0x0;
	exp = 0x01;
	while (len-- > 0)
	{
		if (*(b + len) == 0x31)
			num += exp;
		exp = exp << 1;
	}
	return (num);
}
