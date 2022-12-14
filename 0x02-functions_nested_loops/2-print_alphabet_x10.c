#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 **/

void print_alphabet_x10(void)
{
	int alphabet = 97;
	char n = 0;

	while (n < 10)
	{
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
	n++;
	}
}
