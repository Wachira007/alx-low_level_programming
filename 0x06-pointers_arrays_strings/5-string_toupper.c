#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s:  string
*Return: thepointer to dest
*/

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			*(s + count) = *(s + count) - 32;
		}
		count++;
	}

	return (s);
}
