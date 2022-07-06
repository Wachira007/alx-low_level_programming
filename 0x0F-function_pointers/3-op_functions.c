#include "3-calc.h"

/**
*op_add - add 2 numbers
*@a: 1st number
*@b: 2nd number
*Return: addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts 2 numbers
*@a: 1st number
*@b: 2nd number
*Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiply 2 numbers
*@a: 1st number
*@b: 2nd number
*Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divide 2 numbers
*@a: 1st number
*@b: 2nd number
*Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod -the module of 2 numbers
*@a: 1st number
*@b: 2nd number
*Return: division remainder
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
