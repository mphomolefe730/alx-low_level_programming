#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: the string
 **/

void rev_string(char *s)
{
	for (s; s % 10; s--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
