#include "main.h"

/**
 * _strlen_recursion - function returns the strlen
 * of  string
 * @s: The string to calculate
 * Return: strlen
 **/

int _strlen_recursion(char *s)
{
	/*base, if we raech NULL*/
	if (*s == '\0')
		/*return the index*/
		return (0);
	/*add index*/
	s++;
	/*run program*/
	return (1 + _strlen_recursion(s));
}
