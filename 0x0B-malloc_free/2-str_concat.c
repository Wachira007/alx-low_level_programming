#include "main.h"
#include <stdlib.h>

/**
*str_concat- concatenate two strings
*
*@s1: string 1
*@s2: string 2
*Return: 2nd string
*/

char *str_concat(char *s1, char *s2)
{
	char *sout;
	unsigned int x, y, z, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	sout = malloc(sizeof(char) * (x + y + 1));

	if (sout == NULL)
	{
		free(sout);
		return (NULL);
	}

	for (z = 0; z < i; z++)
		sout[z] = s1[z];

	limit = y;
	for (y = 0; y <= limit; z++, y++)
		sout[z] = s2[y];

	return (sout);
}
