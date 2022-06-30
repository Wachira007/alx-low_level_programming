#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates 2 strings
*@s1: string 1
*@s2: string 2
*@n: bytes amounts
*Return: pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int x, y, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	if (n > y)
		n = y;

	lsout = x + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - x];

	sout[i] = '\0';

	return (sout);
}
