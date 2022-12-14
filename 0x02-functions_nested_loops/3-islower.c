#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: charactor being difined
 *
 * Returns: 1 if c is lowercase, return 0 otherwise
 *
 **/

int _islower(int c)
{
	if (c <= 'z' && >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
