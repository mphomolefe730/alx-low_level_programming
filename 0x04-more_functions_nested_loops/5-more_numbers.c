#include "main.h"

/**
 * more_numbers - print 0 - 14 (10 times)
 *
 **/

void more_numbers(void)
{
	int num, round;

	for (round = 1; round <= 10; round++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
				_putchar(num % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
