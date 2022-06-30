#include "main.h"
#include <stdlib.h>

/**
*_calloc- allocates memory for an array
*@nmemb: number of elements
*@size: size of bytes
*Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		p[x] = 0;

	return (p);
}
