#include "main.h"

/**
 * print_line - void print_line(int n)
 * @n: the number of times the character _ should be printed
 **/

void print_line(int n)
{
	int input;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (input = 0; input <= n; input++)
		{
		_putchar(95);
		}
	}
	_putchar('\n');
}
