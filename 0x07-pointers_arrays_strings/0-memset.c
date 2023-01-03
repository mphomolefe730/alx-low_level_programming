#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n byte of memory area pointed
 * to by string (*s) with the constant byte b.
 *
 * @s: string
 * @b: replacement character
 * @n: size of string
 *
 * Return: pointer to s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	/*memset(s, b, n);*/
	/*return (s);*/

	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
