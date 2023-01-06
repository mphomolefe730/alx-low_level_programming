#include "main.h"

/**
 * _pow_recursion - return the power of variable x raised  by y
 * @x: base variable
 * @y: power variable
 * Return: result
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
