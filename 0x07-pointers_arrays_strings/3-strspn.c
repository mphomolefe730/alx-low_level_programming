#include "main.h"
#include <string.h>

/**
 * _strspn - Fuction that gets the length prefix substring
 *
 * @s: Search variable
 * @accept: word variable
 * Return: number of bytes
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
