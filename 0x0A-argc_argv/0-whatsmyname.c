#include <stdio.h>
/**
*main - name print
*@argc:number of commandline arguments
*@argv: an array that contains a program
*that prints commanline arguments
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
