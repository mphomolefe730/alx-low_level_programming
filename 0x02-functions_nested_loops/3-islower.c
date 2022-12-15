#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: charactor being difined
 *
 * Return: 1 if c is lowercase, return 0 otherwise
 *
 **/

int _islower(int c)
{	
	if ('z' >= c || 'a' <= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
