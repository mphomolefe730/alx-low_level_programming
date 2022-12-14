#include "main.h"

/**
 *  main -
 *
 *  return: Always 0 (Success)
 **/

viod print_alphabet(void)
{
	int charactor = 97;

	for (charactor; charactor <=122; charactor++)
	{
		_putchar(charactor);
	}
	_putchar('\n');
	return (0);

}
