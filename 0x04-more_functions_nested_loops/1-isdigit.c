#include "main.h"

/**
 * _isdigit - check the code
 *
 * @c: variable
 *
 * Return: Always 0
 **/

int _isdigit(int c)
{
	c = '0';
	if (c >= '0' || '9' >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
