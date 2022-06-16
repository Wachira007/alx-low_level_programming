#include "main.h"
/**
*_islower- takes interger. checks if the character is in lower case
*@c: character to check
*Return:1 (success)
*/
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);
}
