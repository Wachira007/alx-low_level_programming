#include "main.h"
#include <stdlib.h>

/**
*_strdup- returns the pointer to the newly allocated space
*@str: string needed
*Return: pointer of an array of characters
*/

char *_strdup(char *str)
{
	char *sout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	sout = (char *)malloc(sizeof(char) * (i + 1));

	if (sout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		sout[j] = str[j];

	return (sout);
}
