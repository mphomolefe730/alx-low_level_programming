#include "main.h"
#include <string.h>

/**
 * _strncpy - purpose is to copy strings
 *
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 *
 * Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
