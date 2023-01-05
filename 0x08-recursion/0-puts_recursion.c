#include "main.h"
#include <string.h>

/**
 * _puts_recursion - a function that prints a string
 * using recursion, followed by new line
 * @s: the string input
 **/

void _puts_recursion(char *s)
{
	/*base line*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*print character*/
	_putchar(*s);
	/*moved index*/
	s++;
	/*run program again*/
	_puts_recursion(s);
}
