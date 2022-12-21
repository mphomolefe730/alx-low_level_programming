#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s: the variable in question
 **/

int _strlen(char *s)
{
	char num = 1;

	for (s; s != '\0'; s--)
	{
	_putchar(*s);
	num++;
	}
	
	int x2 = num * 2;
	_putchar(x2);
	_puchar('\n');
}
