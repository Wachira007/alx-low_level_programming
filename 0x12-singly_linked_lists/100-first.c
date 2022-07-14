#include <stdio.h>

/**
*prior_main - function executed before main
*Return: none
*/

void __attribute__ ((constructor)) prior_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
