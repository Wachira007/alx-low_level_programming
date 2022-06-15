#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, y, x, dr1, dr2, add = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		x = i;
	else
		x = j;
	if (size_r <= bg + 1)
		return (0);
	r[x + 1] = '\0';
	i--, j--, size_r--;
	dr1 = *(n1 + i) - 48, dr2 = *(n2 + j) - 48;
	while (x >= 0)
	{
		y = dr1 + dr2 + add;
		if (y >= 10)
			add = y / 10;
		else
			add = 0;
		if (y > 0)
		*(r + x) = (y % 10) + 48;
		else
			*(r + x) = '0';
		if (i > 0)
			i--, dr1 = *(n1 + i) - 48;
		else
			dr1 = 0;
		if (j > 0)
			j--, dr2 = *(n2 + j) - 48;
		else
			dr2 = 0;
		x--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
