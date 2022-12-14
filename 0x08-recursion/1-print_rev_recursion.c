#include "main.h"

/**
 * _print_rev_recursion - reverses string
 * @s: The variable string
 **/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	/*add to index*/
	s++;
	/*run program again*/
	_print_rev_recursion(s);
	/* decrease index*/
	s--;
	/*print the character*/
	_putchar(*s);
}
