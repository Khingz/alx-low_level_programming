/**
 * flip_bits - Counts the number of bits needed to be flipped
 * @n: num
 * @m: num to flip n.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_n = n ^ m, bits_n = 0;

	while (xor_n > 0)
	{
		bits_n += (xor_n & 1);
		xor_n >>= 1;
	}

	return (bits_n);
}
