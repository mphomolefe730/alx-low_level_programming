#include "main.h"

/**
 * _puts - print string, followed by new line to stdout
 * @str: String variable
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
