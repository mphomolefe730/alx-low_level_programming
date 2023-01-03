#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n byter from src to des
 *
 * @dest: the destination pointer/string
 * @src: the source pointer/string
 * @n: the size of the string
 *
 * Return: dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*memcpy(dest, src, n);*/
	/*return (dest);*/

	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = *src;
		n--;
	}
	return (src);
}
