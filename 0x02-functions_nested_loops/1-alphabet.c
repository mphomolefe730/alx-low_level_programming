#include "main.h"

/**
 *  print_alphabet - Write a function that prints the alphabet,
 *  in lowercase, followed by a new line.
 *  print_alphabet is working as a function
 *
 *  return: Always 0 (Success)
 **/

void print_alphabet(void)
{
	int charactor = 97;

	while (charactor <= 122)
	{
		_putchar(charactor);
		charactor++;
	}
	_putchar('\n');
}
