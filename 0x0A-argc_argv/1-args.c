#include <stdio.h>
/**
*main- prints the arguments passed into it
*@argc: number of commandline arguments
*@argv: array containing command line arguments
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
