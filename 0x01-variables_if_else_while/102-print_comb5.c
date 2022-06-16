#include <stdio.h>

/**
 * main - print pairs of double digits
 * Description: print pairs of double digit combos
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			d = b + 1;
			c = a;
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 57 || b < 56 || c < 57 || d < 57)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
