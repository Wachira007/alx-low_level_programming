#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: takes an integer
*Return: 1(success)
*/

int _isaplha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
