#include "main.h"

/**
 * _isalpha - function that checks for lowercase character.
 * @c: charactor being difined
 *
 * Return: 1 if c is lowercase or upper, return 0 otherwise
 *
 **/

int _isalpha(int c)
{
	if ((('A' && 'a') <= c) || ('Z' && 'z') <= c)
	{
		return (1);
	}
	else if ((c >= (int)(33 && 128)) || (c <= (int)(254 && 64)))
	{
		return (0);
	}

	else
	{
		return (0);
	}
}
