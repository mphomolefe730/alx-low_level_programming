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
	va_list arg;
	/*start of listing*/
	va_start(arg, n);
	if (n == 0)
		return (0);

	int sum = 0, i;

	/*goes through list of arg*/
	for (i = 0; i < arg; i++)
		/*added values to sum variable*/
		sum += va_arg(arg, int);
	/*end listing*/
	va_end(arg);
	return (sum);
}
