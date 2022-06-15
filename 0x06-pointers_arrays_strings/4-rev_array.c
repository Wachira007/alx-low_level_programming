#include "main.h"
/**
*reverse_array - reverses content of an array
*@a: an array
*@n: number of elements of the array
*Return: no return
*/

void reverse_array(int *a, int n)
{
	int i, j, z;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			z = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = z;
		}
	}
}
