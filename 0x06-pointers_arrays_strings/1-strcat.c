#include "main.h"
#include <string.h>

/**
 * _strncat - function to append with less characters
 *
 * @dest: variable 1
 * @src: variable 2
 * @n: varuable 3
 *
 * Return: Combination
 **/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
