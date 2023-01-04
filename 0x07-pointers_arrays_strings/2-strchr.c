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
	int *i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
