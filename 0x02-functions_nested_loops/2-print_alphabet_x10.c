#include "main.h"

/**
 * main - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int alphabet = 97;

	for (alphabet; alphabet <= 122; alphabet++)
	{
		if (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet <= 122;
			alphabet++;
		}
	_putchar(alphabet);
	}
	return (0);
}
