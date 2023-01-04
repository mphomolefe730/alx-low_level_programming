#include "main.h"
#include <string.h>

/**
 * _strchr - locate character in a string
 *
 * @s: the string to search in
 * @c: character to search for
 * Return: first occurrence of c, else null
 **/

char *_strchr(char *s, char c)
{
	char *i;

	strchr(s, c);

	i = &c;

	return (i);
}
