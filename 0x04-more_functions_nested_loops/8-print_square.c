#include "main.h"

/**
 * print_square - prints squares follow by a line
 * @size: the number of times the character #
 * should be printed
 **/

void print_square(int size)
{
	int input;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (input = 0; input <= size; input++)
		{
		_putchar('#');
		}
	}
	_putchar('\n');
}
