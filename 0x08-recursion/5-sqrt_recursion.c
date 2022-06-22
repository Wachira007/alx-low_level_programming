#include "main.h"

/**
*cpower - returns the natural square root
*@n: input
*@c: iterator
*Return: square root or -1
*/

int cpower(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + cpower(n, c + 1));
}
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input
*Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (cpower(n, 2));
}
