#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s: the variable in question
 * Return: number of characters
 **/

int _strlen(char *s)
{
	char num = 1;

	for (s; s != '\0'; s--)
	{
		_putchar(*s);
		num++;
	}

	int fnum = num * 2;

	return (fnum);
}
