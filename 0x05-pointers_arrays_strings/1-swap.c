#include "main.h"
/**
*swap_int - swaps the values of 2 integers
*@a: int parameter
*@b: int parameter
*Return:
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
