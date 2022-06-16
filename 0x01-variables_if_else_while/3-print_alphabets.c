#include <stdio.h>

/**
*main - print the letters of the alphabe
*Description: print the letters of the aphabet in lower then in uppercase
*Return: Always 0 (Success)
*/

int main(void)
{
	int x, y;

	x = 97;
	y = 65;

	while (x < 123)
	{
		putchar(x);
		x++;
	}

	while (y < 91)
	{
		putchar(y);
		y++;
	}

	putchar(10);

	return (0);
}
