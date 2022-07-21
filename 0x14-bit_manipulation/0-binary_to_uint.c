#include "main.h"

/**
*binary_to_uint- convert binary to unsigned int
*@b: binary
*Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, basetwo;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, basetwo = 1; len >= 0; len--, basetwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += basetwo;
		}
	}

	return (i);
}
