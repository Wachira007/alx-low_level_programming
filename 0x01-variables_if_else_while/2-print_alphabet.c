#include <stdio.h>

/**
* main - print the alphabeticel letters.
* Description: print the letters of the alphabet
* Return: Always 0 
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
