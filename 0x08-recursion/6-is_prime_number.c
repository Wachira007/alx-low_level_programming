#include "main.h"

/**
*am_prime - checks if a number is prime
*@n: input
*@c: iterator
*Return: 1 if n is a prime number. 0 if n is not a prime number.
*/

int am_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + am_prime(n, c + 1));
}
/**
*is_prime_number - checks if a number is prime
*@n: input
*Return: 1 if n is a prime number. 0 if n is not a prime number.
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (am_prime(n, 2));
}
