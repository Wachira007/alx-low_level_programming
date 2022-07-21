#include "main.h"

/**
*clear_bit - sets bitvalue to 0
*@n: unsigned long int pointer
*@index: bitindex
*Return: 1 - success, -1 - Failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
