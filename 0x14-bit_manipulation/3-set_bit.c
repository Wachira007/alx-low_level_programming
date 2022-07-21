#include "main.h"

/**
*set_bit - set bitvalue to 1
*@n: unsigned long int pointer
*@index: bit index
*Return: 1 - Success, -1 - failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
