#include "function_pointers.h"

/**
*array_iterator - executes a function given as a
*@array: integer array.
*@size: array size
*@action: function pointer
*Return: no return.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
