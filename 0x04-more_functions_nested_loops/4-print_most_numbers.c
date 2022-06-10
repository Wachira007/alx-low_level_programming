#include "main.h"

/**
*print_most_numbers-  prints most numbers
*Return:
*/
void print_most_numbers(void)
{
	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		_putchar (x + '0');
	}
	_putchar('\n');

}
