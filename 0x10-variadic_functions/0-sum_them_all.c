#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that
 * returns the sum of all its parameters
 * @n: number of variables
 * Return: the sum of variables
 **/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0, x = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0, i < n, i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);

	return (sum);
}
