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
	int i;
	char null = '\0';

	/*for (i = 0; s[i] <= c; i++)*/
	/*{*/
		/*if (s[i] = '\0')*/
		/*{*/
			/*return (null);*/
			/*break;*/
		/*}*/
		/*else if (s[i] == c)*/
			/*return (i);*/
		/*else*/
			/*continue;*/
	/*}*/

	/*for (i = 0; s != '\0'; i++)*/
	/*{*/
		/*if (s[i] == c)*/
			/*return (i);*/
	/*}*/
	/*if (s[i] == '\0')*/
		/*return (null);*/

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
