#include "main.h"

/**
 * main - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 **/

void print_alphabet_x10(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}

	_putchar(alphabet);
	alphabet <= 122;
	alphabet++;
	}
	return (0);
}
