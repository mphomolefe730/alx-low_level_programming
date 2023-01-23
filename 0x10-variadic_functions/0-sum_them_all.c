#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that
 * returns the sum of all its parameters
 * @n: number of variables
 * Return: the sum of variables
 **/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(arg, n);

	if (n == 0)
		return (0);

	for (i = 0, i < n, i++)
		sum va_arg(args, int);
	va_end(args);

	return (sum);
}
