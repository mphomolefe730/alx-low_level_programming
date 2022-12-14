#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 **/

void print_alphabet_x10(void)
{
	int n = 48, alphabet;

	while (n < 58)
	{
		alphabet = 97;

		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
	_putchar('\n');
	n++;
	}
}
