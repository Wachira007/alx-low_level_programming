#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 48)
	{
		if (x < 10)
			putchar(x + '0');
		else if (x > 41)
			putchar(x - 10 + 'A');
		x++;
	}
	putchar(10);

	return (0);
}
