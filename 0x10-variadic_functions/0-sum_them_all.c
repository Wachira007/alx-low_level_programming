#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sum of all its paramters
*@n: number of paramters passed to function
*@...: variable number of paramters to calculate sum
*Return: If n == 0 - 0.
*       else - sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
