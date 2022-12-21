#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s: the variable in question
 * Return: number of characters
 **/

int _strlen(char *s)
{
	char num = 0;

	for (; *s++;)
	num++;
	_putchar('\n');
	return (num);
}
