#include "main.h"
#include <string.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: always 0 (success)
 **/

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, y;

	for (y = 0; y < size; y++)
		sum1 = sum1 + a[y * size + y];
	for (y = size; y >= 0; y--)
		sum2 += a[y * size + (size - y - 1)];
	_putchar(sum1);
	_putchar(sum2);
}
