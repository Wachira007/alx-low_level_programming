#include "main.h"

/**
*largest_number - prints the largest number in a list of three
*@a: is the first integer
*@b: is the second integer
*@c: is the third integer
*Return: Largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
