#include "main.h"

/**
*flip_bits - no. of bits needed to flip a bit
*@n: 1
*@m: 2
*Return: number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_n;

	for (bits_n = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_n++;
	}

	return (bits_n);
}
