#include "main.h"

/**
 * print_triangle - function prints triangle
 *
 * @size: number of lines to print
 **/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			putchar('\n');
	}
	_putchar('\n');
}
