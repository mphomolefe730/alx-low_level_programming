#include "main.h"

/**
 *  main -Write a function that prints the alphabet,
 *  in lowercase, followed by a new line.
 *
 *  return: Always 0 (Success)
 **/

void print_alphabet(void)
{
	int charactor = 97;

	for (charactor; charactor <=122; charactor++)
	{
		_putchar(charactor);
	}
	_putchar('\n');
	return (0);

}
