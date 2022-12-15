#include "main.h"

/**
 * _isupper - checks for upper case charactors
 *
 * @c: The variable the computer put
 * Return: 1 if uppercase, 0 else
 **/

int _isupper(int c)
{
	if (c >= (char)'A' || c <= (char)'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
