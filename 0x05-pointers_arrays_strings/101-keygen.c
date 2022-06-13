#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generates pseudo reandom bytes
*Return: 0 
*/
int main(void)
{
	int r = 0, q = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (q < 2772)
	{
		r = rand() % 128;
		if ((q + r) > 2772)
			break;
		q = q + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - q));
	return (0);
}
