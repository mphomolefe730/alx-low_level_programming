#include "main.h"
#include <string.h>

/**
 * _put_recursion - a function that prints a string
 * followed by new line
 * @s: the string input
 * Return: Always 0 (Success)
 **/

void _puts_recursion(char *s)
{
	char  i;

	for (i = 0, i <= strlen[s], i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
