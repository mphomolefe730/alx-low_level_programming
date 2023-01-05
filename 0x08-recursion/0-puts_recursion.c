#include "main.h"
#include <string.h>

/**
 * _puts_recursion - a function that prints a string
 * followed by new line
 * @s: the string input
 **/

void _puts_recursion(char *s)
{
	int i;
	int len = str[s];

	for (i = 0; i <= len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
